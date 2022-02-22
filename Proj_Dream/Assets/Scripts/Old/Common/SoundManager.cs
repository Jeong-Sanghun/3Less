using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum BGM {
    Intro, Bright,BrightChange, Dark
}

public enum SFX
{
    SoundMessageAlarm, DoorSound, BrokenSound
}


public class SoundManager : MonoBehaviour
{
    public static SoundManager singleton;
    
    public AudioSource bgmSource;
    
    public AudioSource effectSource;

    [SerializeField]
    AudioClip[] bgmArray;
    [SerializeField]
    AudioClip[] effectArray;

    void Awake()
    {
        if (singleton == null)
        {
            singleton = this;
            DontDestroyOnLoad(gameObject);

        }
        else
        {
            Destroy(gameObject);
        }
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    public void ChangeVolume()
    {

    }

    public void BGMPlay(BGM bgm)
    {
        bgmSource.clip = bgmArray[(int)bgm];
        bgmSource.Play();
    }
    public void EffectPlay(SFX sfx)
    {
        effectSource.clip = effectArray[(int)sfx];
        effectSource.Play();
    }

    public void SoundActive(bool active)
    {
        bgmSource.mute = active;
        effectSource.mute = active;
    }

    // Update is called once per frame
    void Update()
    {

    }
}
