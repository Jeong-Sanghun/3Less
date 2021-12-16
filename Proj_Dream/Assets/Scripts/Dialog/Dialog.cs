using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public enum Character
{
    Player,
    Narator,
    System,
    Fish,
    Mushroom,
    NotAllocated
}

[System.Serializable]
public class Dialog
{

    public string dialog;
    public int stopPoint;
    public string character;

    [System.NonSerialized]
    public Character characterEnum;

    public Dialog()
    {
        dialog = null;
        stopPoint = 0;
        character= null;
        characterEnum = Character.NotAllocated;
    }

    public void SetCharacterEnum()
    {
        
        if(character == null)
        {
            characterEnum = Character.NotAllocated;
        }
        else if (character.Contains("ÁÖÀÎ°ø"))
        {
            characterEnum = Character.Player;
        }
        else if (character.Contains("SYS"))
        {
            characterEnum = Character.System;
        }
        else if (character.Contains("NAR"))
        {
            characterEnum = Character.Narator;
        }
        else if (character.Contains("±ÝºØ¾î"))
        {
            characterEnum = Character.Fish;
        }
        else if (character.Contains("¹ö¼¸"))
        {
            characterEnum = Character.Mushroom;
        }
        Debug.Log(characterEnum);
    }

}
