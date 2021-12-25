using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TwelvethMemorySceneManager : MemorySceneManagerParent
{
    [SerializeField]
    Image twelvethFadeImage;
    [SerializeField]
    GameObject playerTarget;
    [SerializeField]
    GameObject motherObject;
    [SerializeField]
    GameObject fatherObject;
    [SerializeField]
    GameObject brotherObject;
    bool isPlayerAfterPos;


    protected override void Start()
    {
        base.Start();
        dialogBundle = jsonManager.ResourceDataLoad<DialogBundle>("SecondChapter12");
        dialogBundle.SetCharacterEnum();


        isPlayerAfterPos = false;
        playerObject.SetActive(true);
        playerObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);
        motherObject.SetActive(true);
        motherObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);
        fatherObject.SetActive(true);
        fatherObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);
        brotherObject.SetActive(true);
        brotherObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);
        nowScene = SceneName.MemoryHome4;

        if(nowDialogIndex == 0)
        {

            StartCoroutine(moduleManager.MoveModule_Linear(playerObject, playerObject.transform.position + Vector3.right / 2f, 1f));
            StartCoroutine(moduleManager.FadeModule_Sprite(playerObject, 0, 1, 1f));


            StartCoroutine(InvokerCoroutine(1f, NextDialog));
        }
        else
        {
            isPlayerAfterPos = true;
            StartCoroutine(OnReEntryGame());
        }
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
        if (keywordList.Contains(ActionKeyword.PlayerMove))
        {
            if (keywordList.Contains(ActionKeyword.First))
            {
                if(isPlayerAfterPos == false)
                {
                    isPlayerAfterPos = true;
                    StartCoroutine(PlayerMoveCoroutine());
                }
                else
                {
                    NextDialog();
                }
                    
            }
            else if (keywordList.Contains(ActionKeyword.Second))
            {
                PlayerMoveSecond();
            }
        }
        if (keywordList.Contains(ActionKeyword.FadeIn))
        {
            StartCoroutine(moduleManager.FadeModule_Image(twelvethFadeImage, 0, 1, 1));
        }
        if (keywordList.Contains(ActionKeyword.FadeOut))
        {
            StartCoroutine(moduleManager.FadeModule_Image(twelvethFadeImage, 1, 0, 1));
            StartCoroutine(InvokerCoroutine(1f, NextDialog));
        }
        if (keywordList.Contains(ActionKeyword.Scene) && keywordList.Contains(ActionKeyword.End))
        {
            StartCoroutine(SceneEndCoroutine(SceneName.MemoryHome4));
        }
    }

    void PlayerMoveSecond()
    {

        StartCoroutine(moduleManager.MoveModule_Linear(brotherObject, brotherObject.transform.position + Vector3.left / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(brotherObject, 0, 1, 1));
        StartCoroutine(InvokerCoroutine(1f, NextDialog));
    }

    IEnumerator PlayerMoveCoroutine()
    {
        isDialogStopping = true;
        TextFrameToggle(false);
        isStopActionable = false;
        StartCoroutine(moduleManager.MoveModule_Linear(playerObject, playerObject.transform.position + Vector3.right / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(playerObject, 1, 0, 1));
        yield return new WaitForSeconds(1.05f);
        playerObject.transform.position = playerTarget.transform.position;
        Vector3 camTarget = new Vector3(playerTarget.transform.position.x + 5, 0, -10);

        StartCoroutine(moduleManager.MoveModule_Linear(cam.gameObject, camTarget, 1));
        yield return new WaitForSeconds(1.05f);

        StartCoroutine(moduleManager.MoveModule_Linear(playerObject, playerObject.transform.position + Vector3.right / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(playerObject, 0, 1, 1));
        StartCoroutine(moduleManager.MoveModule_Linear(motherObject, motherObject.transform.position + Vector3.left / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(motherObject, 0, 1, 1));
        StartCoroutine(moduleManager.MoveModule_Linear(fatherObject, fatherObject.transform.position + Vector3.left / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(fatherObject, 0, 1, 1));
        StartCoroutine(InvokerCoroutine(1,NextDialog));

    }

    protected override void OnActionKeyword()
    {
        Debug.Log("스탑포인트");
        List<ActionClass> actionClassList = nowActionList;
        bool immediateStart = false;
        bool playerMove = false;
        for (int i = 0; i < actionClassList.Count; i++)
        {
            ActionClass nowAction = actionClassList[i];
            List<ActionKeyword> keywordList = nowAction.actionList;
            List<float> parameterList = nowAction.parameterList;
            Debug.Log("액션리스트 카운트" + actionClassList.Count);
            if (keywordList.Contains(ActionKeyword.ImmediateDialog) || (keywordList.Contains(ActionKeyword.Route) && !keywordList.Contains(ActionKeyword.End)))
            {
                immediateStart = true;
            }
            if (keywordList.Contains(ActionKeyword.PlayerMove))
            {
                if (isPlayerAfterPos == true)
                {
                    immediateStart = true;
                }
                else
                {
                    playerMove = true;
                }
                
            }
            
            OverrideAction(keywordList, parameterList);
        }
        if (immediateStart && playerMove == false)
        {
            isDialogStopping = false;
            NextDialog();
            return;
        }
        isStopActionable = false;
        for (int i = 0; i < ballonList.Count; i++)
        {
            ballonList[i].SetActive(false);
        }

        TextFrameToggle(false);
    }

    IEnumerator OnReEntryGame()
    {
        isDialogStopping = true;
        isStopActionable = false;
        playerObject.transform.position = playerTarget.transform.position;
        Vector3 camTarget = new Vector3(playerTarget.transform.position.x + 5, 0, -10);
        cam.gameObject.transform.position = camTarget;
        StartCoroutine(moduleManager.MoveModule_Linear(playerObject, playerObject.transform.position + Vector3.right / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(playerObject, 0, 1, 1));
        StartCoroutine(moduleManager.MoveModule_Linear(motherObject, motherObject.transform.position + Vector3.left / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(motherObject, 0, 1, 1));
        StartCoroutine(moduleManager.MoveModule_Linear(fatherObject, fatherObject.transform.position + Vector3.left / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(fatherObject, 0, 1, 1));
        if (nowDialogIndex > 40)
        {
            StartCoroutine(moduleManager.MoveModule_Linear(brotherObject, brotherObject.transform.position + Vector3.left / 2, 1));
            StartCoroutine(moduleManager.FadeModule_Sprite(brotherObject, 0, 1, 1));
        }
        yield return new WaitForSeconds(1f);
        NextDialog();
    }

}
