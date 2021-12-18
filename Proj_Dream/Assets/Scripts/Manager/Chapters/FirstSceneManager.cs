using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
public class FirstSceneManager : SceneManagerParent
{
    // Start is called before the first frame update


    [SerializeField]
    FishState1 fish;

    Vector3 camStartPos;
    Vector3 camZoomPos;




    protected override void Start()
    {
        base.Start();
        dialogBundle = jsonManager.ResourceDataLoad<DialogBundle>("FirstChapter1");
        dialogBundle.SetCharacterEnum();

        camStartPos = cam.transform.position;
        camZoomPos = new Vector3(2.43f, -0.02f, -10);

        StartCoroutine(InvokerCoroutine(1, NextDialog));

        
    }






    protected override void OverrideAction(List<ActionKeyword> keywordList,List<float> parameterList)
    {
        for (int j = 0; j < keywordList.Count; j++)
        {
            Debug.Log(keywordList[j]);
        }

        if (keywordList.Contains(ActionKeyword.FadeOut))
        {
            StartCoroutine(moduleManager.FadeModule_Image(fadeInImage, 1, 0, 1));
            StartCoroutine(InvokerCoroutine(1, SetDialogStopFalse));
        }
        if (keywordList.Contains(ActionKeyword.ZoomOut))
        {
            StartCoroutine(CameraZoomCoroutine());
        }
        if (keywordList.Contains(ActionKeyword.PlayerMove))
        {
            player.isPlayPossible = true;
        }
        if (keywordList.Contains(ActionKeyword.StopSeconds))
        {
            int index = keywordList.IndexOf(ActionKeyword.StopSeconds);
            StartCoroutine(InvokerCoroutine(parameterList[index], NextDialog));
        }
        if (keywordList.Contains(ActionKeyword.FishMove))
        {
            if (keywordList.Contains(ActionKeyword.First))
            {
                FishFirstComingStopPoint();
            }
            if (keywordList.Contains(ActionKeyword.Second))
            {
                FishSecondComingStopPoint();
            }
            if (keywordList.Contains(ActionKeyword.Third))
            {
                fish.GotoTarget3();
            }
        }

    }


    void FishFirstComingStopPoint()
    {
        player.SetAnim(PlayController.AnimState.Idle);
        fish.GotoTarget1();
    }

    void FishSecondComingStopPoint()
    {
        player.SetAnim(PlayController.AnimState.Idle);
        fish.GotoTarget2();

    }

    IEnumerator CameraZoomCoroutine()
    {
        float timer = 0;
        float startOrtho = cam.orthographicSize;
        float endOrtho = 5.4f;

        while (timer < 1)
        {
            timer += Time.deltaTime;
            yield return null;
            cam.transform.position = Vector3.Lerp(camStartPos, camZoomPos, timer);
            cam.orthographicSize = Mathf.Lerp(startOrtho, endOrtho, timer);
        }

        
        cam.transform.localPosition = camZoomPos;
        StartCoroutine(CameraFollowCoroutine());
        cam.orthographicSize = endOrtho;
        isDialogStopping = false;
        TextFrameToggle(true);
        NextDialog();

    }

    public override void TriggerEnter(string triggerName)
    {
        for(int i = 0; i < nowActionList.Count; i++)
        {
            List<ActionKeyword> keywordList = nowActionList[i].actionList;
            if (triggerName.Contains("Trigger1") && keywordList.Contains(ActionKeyword.PlayerMove) && keywordList.Contains(ActionKeyword.First))
            {
                isDialogStopping = false;
                player.SetAnim(PlayController.AnimState.Idle);
                NextDialog();
                player.isPlayPossible = false;
            }
            else if (triggerName.Contains("Trigger2") && keywordList.Contains(ActionKeyword.PlayerMove) && keywordList.Contains(ActionKeyword.Second))
            {
                isDialogStopping = false;
                player.SetAnim(PlayController.AnimState.Idle);
                NextDialog();
                player.isPlayPossible = false;
            }
            else if (triggerName.Contains("Trigger5") && keywordList.Contains(ActionKeyword.PlayerMove) && keywordList.Contains(ActionKeyword.Third))
            {
                NextDialog();
                isDialogStopping = true;
            }
        }

    }

}
