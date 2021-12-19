using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public enum ActionKeyword
{
    First, Second, Third,Fourth,
    StopSeconds, FishMove, PlayerMove,FadeOut,FadeIn, ZoomOut, ImgFlashback,ImgFalse,
    Bubble, Scissors,Medal,
    ImmediateDialog,
    Touch, Drag,
    SceneEnd
}


public class ActionClass
{
    public List<ActionKeyword> actionList;
    public List<float> parameterList;

    public ActionClass()
    {
        actionList = new List<ActionKeyword>();
        parameterList = new List<float>();
    }
}
