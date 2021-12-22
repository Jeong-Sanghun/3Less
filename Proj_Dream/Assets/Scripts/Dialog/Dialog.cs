using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public enum Character
{
    Player,
    Narator,
    System,
    Message,
    Fish,
    Mushroom,
    Mother,
    Father,
    Brother,
    FriendGirl,
    NotAllocated
}


[System.Serializable]
public class Dialog
{

    public string dialog;
    public string actionKeyword;
    public string character;
    public string routeFirst;
    public string routeSecond;
    public string routeThird;
    public string routeFourth;
    public string routeFifth;

    [System.NonSerialized]
    public List<string> routeList;


    [System.NonSerialized]
    public List<ActionClass> actionList;

    [System.NonSerialized]
    public Character characterEnum;

    public Dialog()
    {
        dialog = null;
        character = null;
        routeFirst = null;
        routeSecond = null;
        routeThird = null;
        routeFourth = null;
        routeFifth = null;
        routeList = null;
        characterEnum = Character.NotAllocated;
    }

    public void SetCharacterEnum()
    {
        
        if(character == null)
        {
            characterEnum = Character.NotAllocated;
        }
        else if (character.Contains("주인공"))
        {
            characterEnum = Character.Player;
        }
        else if (character.Contains("SYS")|| character.Contains("MES"))
        {
            characterEnum = Character.System;
        }
        else if (character.Contains("NAR"))
        {
            characterEnum = Character.Narator;
        }
        else if (character.Contains("금붕어"))
        {
            characterEnum = Character.Fish;
        }
        else if (character.Contains("버섯"))
        {
            characterEnum = Character.Mushroom;
        }
        else if (character.Contains("어머니"))
        {
            characterEnum = Character.Mother;
        }
        else if (character.Contains("아버지"))
        {
            characterEnum = Character.Father;
        }
        else if (character.Contains("동생"))
        {
            characterEnum = Character.Brother;
        }
        else if (character.Contains("B") || character.Contains("학생"))
        {
            characterEnum = Character.FriendGirl;
        }


        if (routeFirst != null)
        {
            routeList = new List<string>();
            routeList.Add(routeFirst);
        }
        if (routeSecond != null)
        {
            routeList.Add(routeSecond);

        }
        if (routeThird != null)
        {
            routeList.Add(routeThird);

        }
        if (routeFourth != null)
        {
            routeList.Add(routeFourth);

        }
        if (routeFifth != null)
        {
            routeList.Add(routeFifth);

        }


        if (actionKeyword == null)
        {
            actionList = null;
            return;
        }
        else
        {
            actionList = new List<ActionClass>();
        }

        string[] keywordArray = actionKeyword.Split(',');

        for(int i = 0; i < keywordArray.Length; i++)
        {
            Debug.Log(keywordArray[i]);
            ActionClass act = new ActionClass();
            actionList.Add(act);
            if (keywordArray[i].Contains("fishMove") || keywordArray[i].Contains("FishMove"))
            {
                act.actionList.Add(ActionKeyword.FishMove);
                act.parameterList.Add(-1);
            }

            if (keywordArray[i].Contains("playerMove") || keywordArray[i].Contains("PlayerMove"))
            {
                act.actionList.Add(ActionKeyword.PlayerMove);
                act.parameterList.Add(-1);
            }

            if (keywordArray[i].Contains("stop") || keywordArray[i].Contains("Stop"))
            {
                if (keywordArray[i].Contains("seconds") || keywordArray[i].Contains("Seconds"))
                {
                    act.actionList.Add(ActionKeyword.StopSeconds);
                    string bufferKeyword = keywordArray[i];
                    int secondsIndex;
                    bufferKeyword = bufferKeyword.Remove(0, 4);
                    if (bufferKeyword.Contains("Seconds"))
                    {
                        secondsIndex =bufferKeyword.IndexOf("Seconds");
                    }
                    else
                    {
                        secondsIndex =bufferKeyword.IndexOf("seconds");
                    }
                    bufferKeyword = bufferKeyword.Remove(secondsIndex, 7);
                    Debug.Log(bufferKeyword);
                    act.parameterList.Add(float.Parse(bufferKeyword));

                }
            }

            if (keywordArray[i].Contains("healthGauge") || keywordArray[i].Contains("HealthGauge"))
            {
                act.actionList.Add(ActionKeyword.HealthGauge);
                string bufferKeyword = keywordArray[i];
                bufferKeyword = bufferKeyword.Remove(0, "healthGauge".Length);
                act.parameterList.Add(float.Parse(bufferKeyword));
            }

            if (keywordArray[i].Contains("moneyGauge") || keywordArray[i].Contains("moneyGauge"))
            {
                act.actionList.Add(ActionKeyword.MoneyGauge);
                string bufferKeyword = keywordArray[i];
                bufferKeyword = bufferKeyword.Remove(0, "moneyGauge".Length);
                act.parameterList.Add(float.Parse(bufferKeyword));
            }

            if (keywordArray[i].Contains("scene") || keywordArray[i].Contains("Scene"))
            {
                act.actionList.Add(ActionKeyword.Scene);
                act.parameterList.Add(-1);
            }

            if (keywordArray[i].Contains("zoomOut") || keywordArray[i].Contains("ZoomOut"))
            {
                act.actionList.Add(ActionKeyword.ZoomOut);
                act.parameterList.Add(-1);
            }

            if (keywordArray[i].Contains("fadeOut") || keywordArray[i].Contains("FadeOut"))
            {
                act.actionList.Add(ActionKeyword.FadeOut);
                act.parameterList.Add(-1);
            }

            if (keywordArray[i].Contains("fadeIn") || keywordArray[i].Contains("FadeIn"))
            {
                act.actionList.Add(ActionKeyword.FadeIn);
                act.parameterList.Add(-1);
            }

            if (keywordArray[i].Contains("scissor") || keywordArray[i].Contains("Scissor"))
            {
                act.actionList.Add(ActionKeyword.Scissors);
                act.parameterList.Add(-1);
            }


            if (keywordArray[i].Contains("bubble") || keywordArray[i].Contains("Bubble"))
            {
                act.actionList.Add(ActionKeyword.Bubble);
                act.parameterList.Add(-1);
            }


            if (keywordArray[i].Contains("medal") || keywordArray[i].Contains("Medal"))
            {
                act.actionList.Add(ActionKeyword.Medal);
                act.parameterList.Add(-1);
            }

            if (keywordArray[i].Contains("touch") || keywordArray[i].Contains("Touch"))
            {
                act.actionList.Add(ActionKeyword.Touch);
                act.parameterList.Add(-1);
            }
            if (keywordArray[i].Contains("drag") || keywordArray[i].Contains("Drag"))
            {
                act.actionList.Add(ActionKeyword.Drag);
                act.parameterList.Add(-1);
            }
            if (keywordArray[i].Contains("immediateDialog") || keywordArray[i].Contains("ImmediateDialog"))
            {
                act.actionList.Add(ActionKeyword.ImmediateDialog);
                act.parameterList.Add(-1);
            }

            if (keywordArray[i].Contains("imgFlashback") || keywordArray[i].Contains("ImgFlashback"))
            {
                act.actionList.Add(ActionKeyword.ImgFlashback);
                act.parameterList.Add(-1);
            }
            if (keywordArray[i].Contains("imgFalse") || keywordArray[i].Contains("ImgFalse"))
            {
                act.actionList.Add(ActionKeyword.ImgFalse);
                act.parameterList.Add(-1);
            }

            if(keywordArray[i].Contains("route") || keywordArray[i].Contains("Route"))
            {
                act.actionList.Add(ActionKeyword.Route);
                act.parameterList.Add(-1);
            }

            if (keywordArray[i].Contains("end") || keywordArray[i].Contains("End"))
            {
                act.actionList.Add(ActionKeyword.End);
                act.parameterList.Add(-1);
            }


            if (keywordArray[i].Contains("first") || keywordArray[i].Contains("First"))
            {
                act.actionList.Add(ActionKeyword.First);
                act.parameterList.Add(-1);
            }
            if (keywordArray[i].Contains("second") || keywordArray[i].Contains("Second") && !(actionKeyword.Contains("seconds") || actionKeyword.Contains("Seconds")))
            {
                act.actionList.Add(ActionKeyword.Second);
                act.parameterList.Add(-1);
            }
            if (keywordArray[i].Contains("third") || keywordArray[i].Contains("Third"))
            {
                act.actionList.Add(ActionKeyword.Third);
                act.parameterList.Add(-1);
            }

            if (keywordArray[i].Contains("fourth") || keywordArray[i].Contains("Fourth"))
            {
                act.actionList.Add(ActionKeyword.Fourth);
                act.parameterList.Add(-1);
            }
        }



    }

}
