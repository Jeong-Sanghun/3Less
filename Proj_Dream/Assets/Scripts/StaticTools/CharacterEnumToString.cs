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
                return "동생";
            case Character.Father:
                return "아빠";
            case Character.Fish:
                return "금붕어";
            case Character.RoomFriend:
                return "자취방 친구";
            case Character.FriendGirl:
                return "여사친";
            case Character.Message:
                return "메시지";
            case Character.Mother:
                return "엄마";
            case Character.Narator:
                return "내레이션";
            case Character.Player:
                return "주인공";
            case Character.System:
                return "시스템";
            case Character.Police:
                return "경찰";
            case Character.Teacher:
                return "선생님";
            case Character.StoreBoss:
                return "편의점 사장님";
            default:
                return "";


        }
    }
}
