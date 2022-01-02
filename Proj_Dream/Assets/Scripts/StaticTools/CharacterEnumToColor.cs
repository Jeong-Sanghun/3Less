using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterEnumToColor
{
    public static Color Changer(Character character)
    {
        switch (character)
        {
            case Character.Brother:
                return new Color(1,0.5f,0);
            case Character.Father:
                return Color.cyan;
            case Character.FriendBoy:
                return Color.blue;
            case Character.FriendGirl:
                return Color.magenta;
            case Character.Mother:
                return Color.red;
            default:
                return Color.white;


        }
    }
}
