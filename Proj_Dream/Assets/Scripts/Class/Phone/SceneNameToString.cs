using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneNameToString
{
    public static string Changer(SceneName sceneName)
    {
        switch (sceneName)
        {
            case SceneName.Bright:
                return "���� ����";
            case SceneName.Dark:
                return "��ο� ����";
            case SceneName.MemoryHallway1:
                return "���� 1";
            case SceneName.MemoryHome1:
                return "�� 1";
            case SceneName.MemoryHome2:
                return "�� 2";
            case SceneName.MemoryHome3:
                return "�� 3";
            case SceneName.MemoryHome4:
                return "�� 4";
            case SceneName.MemoryMyRoom:
                return "��";
            case SceneName.MemoryRestaurant:
                return "�����";
            case SceneName.MemoryRooftop1:
                return "���� 1";
            case SceneName.MemorySchool1:
                return "�б� 1";
            case SceneName.MemorySchool2:
                return "�б� 2";
            case SceneName.MemoryStreet1:
                return "�Ÿ� 1";
            case SceneName.MemoryStreet2:
                return "�Ÿ� 2";
            case SceneName.MemoryStreet3:
                return "�Ÿ� 3";
            default:
                return "����";


        }
    }
}
