using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThirdMemorySceneManager : MemorySceneManagerParent
{
    [SerializeField]
    GameObject playerTarget;
    [SerializeField]
    GameObject motherObject;
    [SerializeField]
    GameObject fatherObject;
    [SerializeField]
    GameObject brotherObject;


    protected override void Start()
    {
        base.Start();
        dialogBundle = jsonManager.ResourceDataLoad<DialogBundle>("SecondChapter3");
        dialogBundle.SetCharacterEnum();

        
        
        playerObject.SetActive(true);
        playerObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);
        motherObject.SetActive(true);
        motherObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);
        fatherObject.SetActive(true);
        fatherObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);
        brotherObject.SetActive(true);
        brotherObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);
        nowScene = SceneName.MemoryStreet1;
        if(nowDialogIndex != 0)
        {
            StartCoroutine(OnReEntryGame());
        }
        else
        {
            StartCoroutine(moduleManager.MoveModule_Linear(playerObject, playerObject.transform.position + Vector3.right / 2f, 1f));
            StartCoroutine(moduleManager.FadeModule_Sprite(playerObject, 0, 1, 1f));
            StartCoroutine(InvokerCoroutine(1f, NextDialog));
        }


        

    }


    protected override void OverrideAction(List<ActionKeyword> keywordList, List<float> parameterList)
    {
        base.OverrideAction(keywordList, parameterList);
        for (int j = 0; j < keywordList.Count; j++)
        {
            Debug.Log(keywordList[j]);
        }
        if (keywordList.Contains(ActionKeyword.PlayerMove))
        {
            StartCoroutine(PlayerMoveCoroutine());
        }
        if (gaugeManager.isGameOver == true)
        {
            return;
        }
        if (keywordList.Contains(ActionKeyword.Scene) && keywordList.Contains(ActionKeyword.End))
        {
            StartCoroutine(SceneEndCoroutine(SceneName.MemoryRooftop1));
        }
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
        StartCoroutine(moduleManager.MoveModule_Linear(motherObject, motherObject.transform.position + Vector3.right / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(motherObject, 0, 1, 1));
        StartCoroutine(moduleManager.MoveModule_Linear(fatherObject, fatherObject.transform.position + Vector3.left / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(fatherObject, 0, 1, 1));
        StartCoroutine(moduleManager.MoveModule_Linear(brotherObject, brotherObject.transform.position + Vector3.left / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(brotherObject, 0, 1, 1));
        yield return new WaitForSeconds(1f);
        NextDialog();
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
        StartCoroutine(moduleManager.MoveModule_Linear(motherObject, motherObject.transform.position + Vector3.right / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(motherObject, 0, 1, 1));
        StartCoroutine(moduleManager.MoveModule_Linear(fatherObject, fatherObject.transform.position + Vector3.left / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(fatherObject, 0, 1, 1));
        StartCoroutine(moduleManager.MoveModule_Linear(brotherObject, brotherObject.transform.position + Vector3.left / 2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(brotherObject, 0, 1, 1));
        yield return new WaitForSeconds(1f);
        NextDialog();
    }
}
