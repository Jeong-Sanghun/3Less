using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class OneBackLog
{
    public Character character;
    public bool isRoute;
    public int dialogIndex;
    public int choosedRouteIndex;

    [System.NonSerialized]
    public GameObject backLogBallonObject;
    [System.NonSerialized]
    public string dialog;

    public OneBackLog()
    {
        character = Character.Player;
        isRoute = false;
        dialogIndex = 0;
        choosedRouteIndex = -1;
    }

    public void SetObject(GameObject obj)
    {
        backLogBallonObject = obj;
    }

    public void SetBackLog(Character character, int index, string _dialog)
    {
        dialogIndex = index;
        dialog = _dialog;
        isRoute = false;
    }

    public void SetBackLog(Character character, int index)
    {
        dialogIndex = index;
        isRoute = false;
    }

    public void SetDialog(string dialogFileName)
    {

    }

    public void SetRouteBackLog(int routeIndex,string _dialog)
    {
        isRoute = true;
        choosedRouteIndex = routeIndex;
        dialog = _dialog;
    }

}
