using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SecondSceneManager : SceneManagerParent
{

    [SerializeField]
    RectTransform scissorRect;

    [SerializeField]
    Transform scissorMiddlePos;
    [SerializeField]
    Transform scissorEndPos;
    [SerializeField]
    GameObject blurImage;
    [SerializeField]
    GameObject roadObject;
    [SerializeField]
    GameObject roadBlockObject;


    // Start is called before the first frame update
    protected override void Start()
    {
        base.Start();
        dialogBundle = jsonManager.ResourceDataLoad<DialogBundle>("FirstChapter2");
        dialogBundle.SetCharacterEnum();

        StartCoroutine(moduleManager.FadeModule_Image(fadeInImage, 1, 0, 1));
        StartCoroutine(InvokerCoroutine(1, NextDialog));
        StartCoroutine(ScissorAnimCoroutine());

    }
    protected override void OverrideAction(List<ActionKeyword> keywordList, List<float> parameterList)
    {
        base.OverrideAction(keywordList, parameterList);
        for (int j = 0; j < keywordList.Count; j++)
        {
            Debug.Log(keywordList[j]);
        }

        if (keywordList.Contains(ActionKeyword.FadeOut))
        {
            StartCoroutine(moduleManager.FadeModule_Image(fadeInImage, 1, 0, 1));
            StartCoroutine(InvokerCoroutine(1, SetDialogStopFalse));
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

            }
            if (keywordList.Contains(ActionKeyword.Second))
            {

            }
            if (keywordList.Contains(ActionKeyword.Third))
            {

            }
        }

    }


    public override void TriggerEnter(string triggerName)
    {
        base.TriggerEnter(triggerName);
        for (int i = 0; i < nowActionList.Count; i++)
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


    public void ScissorTouch()
    {

        if (isDialogStopping == false || nowActionList == null || isScissorClicked == true)
        {
            return;
        }
        for (int i = 0; i < nowActionList.Count; i++)
        {
            List<ActionKeyword> keywordList = nowActionList[i].actionList;
            if (keywordList.Contains(ActionKeyword.Scissors) && keywordList.Contains(ActionKeyword.Touch))
            {

                player.SetAnim(PlayController.AnimState.Idle);
                player.isPlayPossible = false;
                isScissorClicked = true;
                break;
            }
        }
    }


    bool isScissorClicked = false;
    IEnumerator ScissorAnimCoroutine()
    {
        Vector3 angle = scissorRect.localEulerAngles;
        bool isPlus = true;
        while(isScissorClicked == false)
        {
            bool lastIsPlus = isPlus;

            float middle = 25f;
            if(angle.z > 180)
            {
                angle.z -= 360;
            }
            if (isPlus && angle.z >40)
            {
                isPlus = false;
            }
            else if(!isPlus && angle.z<10)
            {
                isPlus = true;
            }
            float changingAngle;

            if ((isPlus && angle.z > 35f && angle.z < 40f) || (!isPlus && angle.z < 15f && angle.z > 10f))
            {
                changingAngle = Time.deltaTime * (18 - Mathf.Abs(angle.z - middle)) *3;
            }
            else
            {
                changingAngle = Time.deltaTime * (15)*3;
            }

            if (isPlus)
            {
                angle.z += changingAngle;
            }
            else
            {
                angle.z -= changingAngle;
            }

            scissorRect.localEulerAngles = angle;

            yield return null;
        }

        blurImage.SetActive(true);
        float timer = 0;
        Vector3 originPos = scissorRect.transform.position;
        Vector3 originScale = scissorRect.transform.localScale;
        Vector3 originRot = scissorRect.transform.localEulerAngles;
        while(timer < 1)
        {
            timer += Time.deltaTime;
            scissorRect.transform.position = Vector3.Lerp(originPos, scissorMiddlePos.transform.position, timer);
            scissorRect.transform.localScale = Vector3.Lerp(originScale, scissorMiddlePos.transform.localScale,timer);
            scissorRect.transform.localEulerAngles = Vector3.Lerp(originRot, scissorMiddlePos.transform.localEulerAngles,timer);
            yield return null;
        }
        yield return new WaitForSeconds(1f);

        timer = 0;
        originPos = scissorRect.transform.position;
        originScale = scissorRect.transform.localScale;
        originRot = scissorRect.transform.localEulerAngles;
        if (originRot.x > 180)
        {
            originRot.x -= 360;
        }
        if (originRot.y > 180)
        {
            originRot.y -= 360;
        }
        if (originRot.z > 180)
        {
            originRot.z -= 360;
        }
        while (timer < 1)
        {
            timer += Time.deltaTime;
            scissorRect.transform.position = Vector3.Lerp(originPos, scissorEndPos.transform.position, timer);
            scissorRect.transform.localScale = Vector3.Lerp(originScale, scissorEndPos.transform.localScale, timer);
            scissorRect.transform.localEulerAngles = Vector3.Lerp(originRot, scissorEndPos.transform.localEulerAngles, timer);
            yield return null;
        }

        
        scissorRect.transform.position = scissorEndPos.transform.position;
        scissorRect.transform.localScale = scissorEndPos.transform.localScale;
        scissorRect.transform.localEulerAngles = scissorEndPos.transform.localEulerAngles;
        scissorRect.gameObject.SetActive(false);
        blurImage.SetActive(false);
        yield return new WaitForSeconds(1f);

        roadObject.SetActive(true);
        roadBlockObject.SetActive(false);
        SpriteRenderer roadSprite = roadObject.GetComponent<SpriteRenderer>();

        timer = 0;
        Color originColor = new Color(1, 1, 1, 0);
        roadSprite.color = originColor;
        while (timer < 1)
        {
            timer += Time.deltaTime;
            originColor.a = timer;
            roadSprite.color = originColor;
            yield return null;
        }
        roadSprite.color = originColor;

        player.isPlayPossible = true;

        //timer = 0;
        //originPos = cam.transform.position;
        //Vector3 endPos = player.transform.position + new Vector3(-0.3f, 4.16f, -10.0f);
        //while (timer < 0.5f)
        //{
        //    timer += Time.deltaTime*2;
        //    cam.transform.position = Vector3.Lerp(originPos, endPos, timer);
        //    yield return null;
        //}


        StartCoroutine(CameraFollowCoroutine());
    }
}
