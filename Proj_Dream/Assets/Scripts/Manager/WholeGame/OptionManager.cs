using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OptionManager : MonoBehaviour
{
    public static OptionManager singleton;
    [SerializeField]
    SoundManager soundManager;
    [SerializeField]
    Sprite soundOnSprite;
    [SerializeField]
    Sprite soundOffSprite;
    [SerializeField]
    Image soundButtonImage;
    bool nowSoundOn;
    // Start is called before the first frame update
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
    private void Start()
    {
        nowSoundOn = true;
    }

    public void SoundButtonToggle()
    {
        if (nowSoundOn)
        {
            soundButtonImage.sprite = soundOffSprite;
        }
        else
        {
            soundButtonImage.sprite = soundOnSprite;
        }


    }

    public void ExitGame()
    {
        Application.Quit();
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
