using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThirteenthMemorySceneManager : PhoneDialogManager
{

    protected override void Start()
    {
        base.Start();
        dialogBundle = jsonManager.ResourceDataLoad<DialogBundle>("SecondChapter13");
        dialogBundle.SetCharacterEnum();



        playerObject.SetActive(true);
        playerObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);

        nowScene = SceneName.MemoryStreet3;
            StartCoroutine(moduleManager.MoveModule_Linear(playerObject, playerObject.transform.position + Vector3.right / 2f, 1f));
            StartCoroutine(moduleManager.FadeModule_Sprite(playerObject, 0, 1, 1f));
            StartCoroutine(InvokerCoroutine(1f, NextDialog));

    }


    protected override void OverrideAction(List<ActionKeyword> keywordList, List<float> parameterList)
    {
        base.OverrideAction(keywordList, parameterList);
        for (int j = 0; j < keywordList.Count; j++)
        {
            Debug.Log(keywordList[j]);
        }
        if (gaugeManager.isGameOver == true)
        {
            return;
        }
        if (keywordList.Contains(ActionKeyword.Scene) && keywordList.Contains(ActionKeyword.End))
        {
            saveData.eighthMemoryLeftTime--;
            StartCoroutine(SceneEndCoroutine(SceneName.MemoryStreet3));

        }
    }
}
