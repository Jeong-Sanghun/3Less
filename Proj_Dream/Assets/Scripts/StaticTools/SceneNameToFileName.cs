using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SceneNameToFileName
{

        static Sprite[] archiveButtonSpriteArray;
    static Sprite[] archiveBackgroundSpriteArray;
    public static Sprite GetButtonImage(SceneName scene)
    {
        if(archiveButtonSpriteArray == null)
        {
            archiveButtonSpriteArray = new Sprite[Enum.GetValues(typeof(SceneName)).Length];
        }
        if(archiveButtonSpriteArray[(int)scene] == null)
        {
            archiveButtonSpriteArray[(int)scene] = Resources.Load<Sprite>("Image/ArchiveButtonImage/" + Changer(scene));
        }
        return archiveButtonSpriteArray[(int)scene];
    }

    public static Sprite GetBackgroundImage(SceneName scene)
    {
        if (archiveBackgroundSpriteArray == null)
        {
            archiveBackgroundSpriteArray = new Sprite[Enum.GetValues(typeof(SceneName)).Length];
        }
        if (archiveBackgroundSpriteArray[(int)scene] == null)
        {
            archiveBackgroundSpriteArray[(int)scene] = Resources.Load<Sprite>("Image/ArchiveBackgroundImage/" + Changer(scene));
        }
        return archiveBackgroundSpriteArray[(int)scene];
    }
    public static string Changer(SceneName sceneName)
    {
        switch (sceneName)
        {
            case SceneName.Bright:
                return "¹àÀº ¼¼°è";
            case SceneName.Dark:
                return "¾îµÎ¿î ¼¼°è";
            case SceneName.MemoryHallway1:
                return "º¹µµ";
            case SceneName.MemoryHome1:
            case SceneName.MemoryHome2:
            case SceneName.MemoryHome3:
            case SceneName.MemoryHome4:
                return "Áý";
            case SceneName.MemoryMyRoom:
                //return "¹æ";
            case SceneName.MemoryRestaurant:
                return "°í±êÁý";
            case SceneName.MemoryRooftop1:
                return "¿Á»ó";
            case SceneName.MemorySchool1:
            case SceneName.MemorySchool2:
                return "ÇÐ±³";
            case SceneName.MemoryDarkStreet1:
                return "¹ã°Å¸®";
            case SceneName.MemoryBrightStreet1:
            case SceneName.MemoryBrightStreet2:
                return "Àú³á°Å¸®";
            default:
                return "¹ã°Å¸®";


        }
    }
}
