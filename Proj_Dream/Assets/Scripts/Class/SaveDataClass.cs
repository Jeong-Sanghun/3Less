using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SaveDataClass
{
    public SceneName savedScene;
    public int dialogIndex;
    public int healthGauge;
    public int moneyGauge;

    public SaveDataClass()
    {
        savedScene = SceneName.MainMenu;
        dialogIndex = 0;
        healthGauge = 9;
        moneyGauge = 9;
    }

}
