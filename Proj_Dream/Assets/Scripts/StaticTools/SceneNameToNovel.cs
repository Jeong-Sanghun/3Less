using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneNameToNovel : MonoBehaviour
{
  
    public static string Changer(SceneName sceneName)
    {
        switch (sceneName)
        {
            case SceneName.Bright:
                return "FirstChapter1";
            case SceneName.Dark:
                return "FirstChapter2";
            case SceneName.MemoryHallway1:
                return "SecondChapter7";
            case SceneName.MemoryHome1:
                return "SecondChapter1";
            case SceneName.MemoryHome2:
                return "SecondChapter6";
            case SceneName.MemoryHome3:
                return "SecondChapter9";
            case SceneName.MemoryHome4:
                return "SecondChapter12";
            case SceneName.MemoryMyRoom:
                return "SecondChapter10";
            case SceneName.MemoryRestaurant:
                return "SecondChapter2";
            case SceneName.MemoryRooftop1:
                return "SecondChapter4";
            case SceneName.MemorySchool1:
                return "SecondChapter5";
            case SceneName.MemorySchool2:
                return "SecondChapter11";
            case SceneName.MemoryStreet1:
                return "SecondChapter3";
            case SceneName.MemoryStreet2:
                return "SecondChapter8";
            case SceneName.MemoryStreet3:
                return "SecondChapter13";
            default:
                return null;


        }
    }
}
