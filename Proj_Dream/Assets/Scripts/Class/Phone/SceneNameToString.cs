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
                return "밝은 세계";
            case SceneName.Dark:
                return "어두운 세계";
            case SceneName.MemoryHallway1:
                return "복도 1";
            case SceneName.MemoryHome1:
                return "집 1";
            case SceneName.MemoryHome2:
                return "집 2";
            case SceneName.MemoryHome3:
                return "집 3";
            case SceneName.MemoryHome4:
                return "집 4";
            case SceneName.MemoryMyRoom:
                return "방";
            case SceneName.MemoryRestaurant:
                return "고깃집";
            case SceneName.MemoryRooftop1:
                return "옥상 1";
            case SceneName.MemorySchool1:
                return "학교 1";
            case SceneName.MemorySchool2:
                return "학교 2";
            case SceneName.MemoryStreet1:
                return "거리 1";
            case SceneName.MemoryStreet2:
                return "거리 2";
            case SceneName.MemoryStreet3:
                return "거리 3";
            default:
                return "동생";


        }
    }
}
