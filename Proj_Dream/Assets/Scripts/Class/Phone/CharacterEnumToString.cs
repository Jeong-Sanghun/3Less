using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterEnumToString
{
    public static string Changer(Character character)
    {
        switch (character)
        {
            case Character.Brother:
                return "����";
            default:
                return "����";


        }
    }
}
