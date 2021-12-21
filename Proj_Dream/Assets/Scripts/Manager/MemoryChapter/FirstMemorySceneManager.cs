using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FirstMemorySceneManager : MemorySceneManagerParent
{
    [SerializeField]
    GameObject playerTarget;
    [SerializeField]
    GameObject motherObject;


    protected override void Start()
    {
        base.Start();
        dialogBundle = jsonManager.ResourceDataLoad<DialogBundle>("SecondChapter1");
        dialogBundle.SetCharacterEnum();

        motherObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);
        playerObject.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0);
        playerObject.SetActive(true);
        motherObject.SetActive(true);
        StartCoroutine(moduleManager.MoveModule_Linear(playerObject, playerObject.transform.position+Vector3.right/2f, 1f));
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
        if (keywordList.Contains(ActionKeyword.PlayerMove))
        {
            if (keywordList.Contains(ActionKeyword.First))
            {
                StartCoroutine(PlayerMoveCoroutine());
            }
        }
        if (keywordList.Contains(ActionKeyword.Scene) && keywordList.Contains(ActionKeyword.End))
        {
            StartCoroutine(SceneEndCoroutine(SceneName.MemoryRestaurant));
        }
    }

    IEnumerator PlayerMoveCoroutine()
    {
        isDialogStopping = true;
        TextFrameToggle(false);
        isStopActionable = false;
        StartCoroutine(moduleManager.MoveModule_Linear(playerObject, playerObject.transform.position + Vector3.right/2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(playerObject, 1, 0, 1));
        yield return new WaitForSeconds(1.05f);
        playerObject.transform.position = playerTarget.transform.position;
        Vector3 camTarget = new Vector3(playerTarget.transform.position.x +5,0,-10);
        
        StartCoroutine(moduleManager.MoveModule_Linear(cam.gameObject, camTarget, 1));
        yield return new WaitForSeconds(1.05f);

        StartCoroutine(moduleManager.MoveModule_Linear(playerObject, playerObject.transform.position + Vector3.right/2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(playerObject, 0, 1, 1));
        StartCoroutine(moduleManager.MoveModule_Linear(motherObject,motherObject.transform.position + Vector3.left/2, 1));
        StartCoroutine(moduleManager.FadeModule_Sprite(motherObject, 0, 1, 1));
        NextDialog();

    }
    
}
