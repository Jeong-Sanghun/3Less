using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum BGM {
    Intro, Bright,BrightChange, Dark,Memory
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
        bgmSource.clip = null;
    }

    public void BGMPlay(BGM bgm)
    {
        StartCoroutine(BGMFade(bgm));
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

    IEnumerator BGMFade(BGM bgm)
    {
        if (bgmSource.clip != null)
        {
            while (bgmSource.volume > 0)
            {
                bgmSource.volume -= Time.deltaTime;
                yield return null;
            }
        }

        bgmSource.volume = 0;
        bgmSource.clip = bgmArray[(int)bgm];
        bgmSource.Play();
        while (bgmSource.volume < 1)
        {
            bgmSource.volume += Time.deltaTime;
            yield return null;
        }
        bgmSource.volume = 1;

    }

    // Update is called once per frame
    void Update()
    {

    }
}
