using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public enum Character
{
    PLAYER,
    NAR,
    SYSTEM,
    FISH,
    Mushroom,
    //NONE,
}

[System.Serializable]
public class Dialog
{

    public string dialog;
    public int stopPoint;
    public string characterName;

    public Dialog()
    {
        dialog = null;
        stopPoint = 0;
        characterName = null;
    }

}
