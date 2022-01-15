using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ThirteenthMemorySceneManager : PhoneDialogManager
{
    [SerializeField]
    GameObject policeObject;
    [SerializeField]
    Image thirteenthFadeImage;
    protected override void Start()
    {
        base.Start();
        dialogBundle = jsonManager.ResourceDataLoad<DialogBundle>("SecondChapter13");
        dialogBundle.SetCharacterEnum();



        playerObject.SetActive(true);
        playerObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);
        policeObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);
        nowScene = SceneName.MemoryBrightStreet2;
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
        if (keywordList.Contains(ActionKeyword.OtherMove))
        {
            PoliceMove();
        }
        if (keywordList.Contains(ActionKeyword.Scene) && keywordList.Contains(ActionKeyword.End))
        {
            StartCoroutine(SceneEndCoroutine(SceneName.MemoryBrightStreet2));
        }
        if (keywordList.Contains(ActionKeyword.FadeIn))
        {
            StartCoroutine(moduleManager.FadeModule_Image(thirteenthFadeImage, 0, 1, 1));
        }
        if (keywordList.Contains(ActionKeyword.FadeOut))
        {
            StartCoroutine(moduleManager.FadeModule_Image(thirteenthFadeImage, 1, 0, 1));
        }
    }

    void PoliceMove()
    {
        StartCoroutine(moduleManager.MoveModule_Linear(policeObject, policeObject.transform.position + Vector3.left / 2f, 1f));
        StartCoroutine(moduleManager.FadeModule_Sprite(policeObject, 0, 1, 1f));
        StartCoroutine(InvokerCoroutine(1f, NextDialog));
    }
}
