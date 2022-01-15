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
                return "���� ����";
            case SceneName.Dark:
                return "��ο� ����";
            case SceneName.MemoryHallway1:
                return "����";
            case SceneName.MemoryHome1:
            case SceneName.MemoryHome2:
            case SceneName.MemoryHome3:
            case SceneName.MemoryHome4:
                return "��";
            case SceneName.MemoryMyRoom:
                //return "��";
            case SceneName.MemoryRestaurant:
                return "�����";
            case SceneName.MemoryRooftop1:
                return "����";
            case SceneName.MemorySchool1:
            case SceneName.MemorySchool2:
                return "�б�";
            case SceneName.MemoryDarkStreet1:
                return "��Ÿ�";
            case SceneName.MemoryBrightStreet1:
            case SceneName.MemoryBrightStreet2:
                return "����Ÿ�";
            default:
                return "��Ÿ�";


        }
    }
}
