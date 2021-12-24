using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TenthMemorySceneManager : MemorySceneManagerParent
{

    [SerializeField]
    Image fourthFadeImage;

    protected override void Start()
    {
        base.Start();
        dialogBundle = jsonManager.ResourceDataLoad<DialogBundle>("SecondChapter10");
        dialogBundle.SetCharacterEnum();

        nowScene = SceneName.MemoryMyRoom;

        StartCoroutine(InvokerCoroutine(1f, NextDialog));

    }

    protected override void OverrideAction(List<ActionKeyword> keywordList, List<float> parameterList)
    {
        base.OverrideAction(keywordList, parameterList);
        if (gaugeManager.isGameOver == true)
        {
            return;
        }
        for (int j = 0; j < keywordList.Count; j++)
        {
            Debug.Log(keywordList[j]);
        }
        if (keywordList.Contains(ActionKeyword.FadeIn))
        {
            fourthFadeImage.gameObject.SetActive(true);
            fourthFadeImage.color = new Color(0, 0, 0, 0);
            StartCoroutine(moduleManager.FadeModule_Image(fourthFadeImage, 0, 1, 1));
        }
        if (keywordList.Contains(ActionKeyword.Scene) && keywordList.Contains(ActionKeyword.End))
        {
            StartCoroutine(SceneEndCoroutine(SceneName.MemorySchool2));
        }
    }
}
