using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class OnePost
{
    public string fileName;
    public SceneName appearingScene;
    public string profileName;
    public string accountName;
    public string timeText;

    public string dialog;
    public bool hasSprite;

    [System.NonSerialized]
    public Sprite loadedSprite;

    [System.NonSerialized]
    public GameObject snsObject;

    public OnePost()
    {
        profileName = null;
        accountName = null;
        timeText = null;
        dialog = null;
        hasSprite = false;
    }

    public Sprite GetSprite()
    {
        if(loadedSprite == null)
        {
            loadedSprite = Resources.Load<Sprite>("Image/Twitter/" + fileName);
        }
        return loadedSprite;
    }
}
