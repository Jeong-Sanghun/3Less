using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneNameToNovel
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
            case SceneName.MemoryDarkStreet1:
                return "SecondChapter3";
            case SceneName.MemoryBrightStreet1:
                return "SecondChapter8";
            case SceneName.MemoryBrightStreet2:
                return "SecondChapter13";
            case SceneName.MemoryFriendRoom1:
                return "ThirdChapter3";
            case SceneName.MemoryBrightStreet3:
                return "ThirdChapter4";
            case SceneName.MemoryFriendRoom2:
                return "ThirdChapter5";
            case SceneName.MemoryBrightStreet4:
                return "ThirdChapter6";
            case SceneName.MemoryFriendRoom3:
                return "ThirdChapter7";
            case SceneName.MemorySchool3:
                return "ThirdChapter8";
            case SceneName.MemoryHallway2:
                return "ThirdChapter9";
            case SceneName.MemoryStore1:
                return "ThirdChapter10";
            case SceneName.MemoryFriendRoom4:
                return "ThirdChapter11";

            default:
                return "SecondChapter1";


        }
    }
}
