using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterEnumToSprite
{
    static Sprite[] spriteArray;
    public static Sprite Changer(Character character)
    {
        if(spriteArray == null)
        {
            spriteArray = new Sprite[14];
        }
        if(spriteArray[(int)character] == null)
        {
            spriteArray[(int)character] = Resources.Load<Sprite>("Image/Profile/" + character);
        }
        return spriteArray[(int)character];
    }
}
