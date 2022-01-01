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
            case Character.Father:
                return "�ƺ�";
            case Character.Fish:
                return "�ݺؾ�";
            case Character.FriendBoy:
                return "����ģ";
            case Character.FriendGirl:
                return "����ģ";
            case Character.Message:
                return "�޽���";
            case Character.Mother:
                return "����";
            case Character.Narator:
                return "�����̼�";
            case Character.Player:
                return "���ΰ�";
            case Character.System:
                return "�ý���";
            default:
                return "";


        }
    }
}
