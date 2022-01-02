using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public enum ActionKeyword
{
    Null,First, Second, Third,Fourth,Fifth,End,
    StopSeconds, FishMove, PlayerMove,FadeOut,FadeIn, ZoomOut, ImgFlashback,ImgFalse,
    Bubble, Scissors,Medal,
    ImmediateDialog, Route,
    HealthGauge,MoneyGauge,
    MultiRoute,
    ConditionalJump,
    ConditionalSceneEnd,
    Touch, Drag,
    PhoneOn,PhoneOff,
    Scene
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
