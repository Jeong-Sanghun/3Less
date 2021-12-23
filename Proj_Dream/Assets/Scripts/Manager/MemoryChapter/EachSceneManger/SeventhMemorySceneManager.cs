using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SeventhMemorySceneManager : MemorySceneManagerParent
{
    [SerializeField]
    GameObject friendBoyObject;


    protected override void Start()
    {
        base.Start();
        dialogBundle = jsonManager.ResourceDataLoad<DialogBundle>("SecondChapter7");
        dialogBundle.SetCharacterEnum();



        playerObject.SetActive(true);
        playerObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);
        friendBoyObject.SetActive(true);
        friendBoyObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);

        nowScene = SceneName.MemoryHallway1;
        StartCoroutine(moduleManager.MoveModule_Linear(playerObject, playerObject.transform.position + Vector3.right / 2f, 1f));
        StartCoroutine(moduleManager.FadeModule_Sprite(playerObject, 0, 1, 1f));
        StartCoroutine(moduleManager.MoveModule_Linear(friendBoyObject, friendBoyObject.transform.position + Vector3.left / 2f, 1f));
        StartCoroutine(moduleManager.FadeModule_Sprite(friendBoyObject, 0, 1, 1f));
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
            StartCoroutine(SceneEndCoroutine(SceneName.MemoryStreet2));
        }
    }
}
