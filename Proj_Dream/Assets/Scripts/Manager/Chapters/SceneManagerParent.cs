using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class SceneManagerParent : MonoBehaviour
{
    protected JsonManager jsonManager;
    protected DialogBundle dialogBundle;
    [SerializeField]
    protected ModuleManager moduleManager;
    [SerializeField]
    protected Image fadeInImage;
    [SerializeField]
    protected Image textFrameImage;
    [SerializeField]
    protected Text dialogText;
    [SerializeField]
    protected Text systemText;

    [SerializeField]
    protected PlayController player;


    [SerializeField]
    protected Camera cam;

    [SerializeField]
    protected List<GameObject> ballonList;

    int nowDialogIndex;
    protected bool isDialogStopping;
    Dialog lastDialog;
    protected bool isStopActionable;

    bool textFrameTransparent;
    bool isStarted;
    bool dialogEnd;
    Character nowCharacter;
    protected List<ActionClass> nowActionList;

    protected string triggerName;
    protected bool isTrigger;

    protected virtual void Start()
    {
        jsonManager = new JsonManager();
        lastDialog = null;
        fadeInImage.gameObject.SetActive(true);
        fadeInImage.color = new Color(0, 0, 0, 1);
        textFrameImage.color = new Color(1, 1, 1, 0);
        dialogText.text = "";
        systemText.text = "";
        textFrameTransparent = true;
        for (int i = 0; i < ballonList.Count; i++)
        {
            ballonList[i].SetActive(false);
        }
        
        dialogEnd = false;
        isStopActionable = false;
        isDialogStopping = true;
        isStarted = false;
    }


    // Update is called once per frame
    protected virtual void Update()
    {

        if (Input.GetMouseButtonDown(0))
        {
            if (isStarted == false || moduleManager.nowTexting)
            {
                return;
            }
            if (isDialogStopping == false)
            {
                NextDialog();
            }
            else if (isStopActionable == true)
            {
                OnActionKeyword();
            }
        }
    }

    protected void NextDialog()
    {
        Dialog nowDialog = dialogBundle.dialogList[nowDialogIndex];
        bool isNewCharacter = false;
        Text nowText = dialogText;
        bool lastTextFrameTransparent = textFrameTransparent;
        if (lastDialog == null)
        {
            nowCharacter = nowDialog.characterEnum;
            isNewCharacter = true;
        }
        else if (nowDialog.characterEnum != nowCharacter)
        {
            nowCharacter = nowDialog.characterEnum;
            isNewCharacter = true;
        }
        for (int i = 0; i < ballonList.Count; i++)
        {
            ballonList[i].SetActive(false);
        }
        if (isNewCharacter)
        {
            switch (nowCharacter)
            {
                case Character.Player:
                    TextFrameToggle(true);

                    ballonList[0].SetActive(true);
 
                    break;
                case Character.Fish:
                    TextFrameToggle(true);
                    ballonList[1].SetActive(true);
                    break;
                case Character.Narator:
                    TextFrameToggle(true);
                    break;
                case Character.Mushroom:
                    TextFrameToggle(true);
                    ballonList[2].SetActive(true);
                    break;
                case Character.System:
                    TextFrameToggle(false);
                    systemText.gameObject.SetActive(true);
                    for (int i = 0; i < ballonList.Count; i++)
                    {
                        ballonList[i].SetActive(false);
                    }
                    systemText.text = nowDialog.dialog;
                    systemText.color = new Color(systemText.color.r, systemText.color.g, systemText.color.b, 0);
                    StartCoroutine(moduleManager.FadeModule_Text(systemText, 0, 1, 1));
                    StartCoroutine(moduleManager.AfterRunCoroutine(3, moduleManager.FadeModule_Text(systemText, 1, 0, 1)));
                    break;
                case Character.NotAllocated:
                    //�̰ŵ� ���� �������ΰſ��� �ƹ��͵� ���ص���.
                    break;
                default:
                    //�ϴ� �ϰ͵� �������ƺ�.
                    break;
            }
        }

        if (nowDialog.dialog != null)
        {
            if (lastTextFrameTransparent != textFrameTransparent)
            {
                moduleManager.nowTexting = true;
                StartCoroutine(moduleManager.
              AfterRunCoroutine(0.8f, moduleManager.LoadTextOneByOne(nowDialog.dialog, dialogText)));

            }
            else
            {
                StartCoroutine(moduleManager.LoadTextOneByOne(nowDialog.dialog, dialogText));

            }
        }
        isDialogStopping = false;
        if (nowDialog.actionKeyword != null)
        {
            isDialogStopping = true;
            isStopActionable = true;
            nowActionList = dialogBundle.dialogList[nowDialogIndex].actionList;
        }


        if (nowDialogIndex == dialogBundle.dialogList.Count)
        {
            isDialogStopping = true;
            dialogEnd = true;
        }
        else
        {
            nowDialogIndex++;
        }

    }


    protected virtual void OnActionKeyword()
    {
        Debug.Log("��ž����Ʈ");
        List<ActionClass> actionClassList = nowActionList;

        isStopActionable = false;
        for(int i =0;i < ballonList.Count; i++)
        {
            ballonList[i].SetActive(false);
        }
        player.isPlayPossible = false;
        TextFrameToggle(false);
        for (int i = 0; i < actionClassList.Count; i++)
        {
            ActionClass nowAction = actionClassList[i];
            List<ActionKeyword> keywordList = nowAction.actionList;
            List<float> parameterList = nowAction.parameterList;
            OverrideAction(keywordList, parameterList);
        }
    }

    protected virtual void OverrideAction(List<ActionKeyword> keywordList,List<float> parameterList)
    {
        for (int i = 0; i < ballonList.Count; i++)
        {
            ballonList[i].SetActive(false);
        }

    }



    //Ʈ��� ������������ ����.
    protected virtual void TextFrameToggle(bool mainActive)
    {
        if (!mainActive == textFrameTransparent)
        {
            return;
        }
        textFrameTransparent = !mainActive;
        if (textFrameTransparent)
        {
            StartCoroutine(moduleManager.FadeModule_Image(textFrameImage, 1, 0, 0.7f));
            dialogText.gameObject.SetActive(false);
        }
        else
        {
            systemText.gameObject.SetActive(false);
            dialogText.gameObject.SetActive(true);
            dialogText.text = "";
            StartCoroutine(moduleManager.FadeModule_Image(textFrameImage, 0, 1, 0.7f));

        }
    }


    protected IEnumerator InvokerCoroutine(float time, Action method)
    {
        Debug.Log("�κ�ũ" + method.Method.Name);
        yield return new WaitForSeconds(time);
        isStarted = true;
        method();
    }

    protected void SetSystemTextFalse()
    {
        systemText.text = "";
        systemText.gameObject.SetActive(false);
    }

    protected void SetStopActionableTrue()
    {
        isStopActionable = true;
    }

    protected void SetDialogStopFalse()
    {
        isDialogStopping = false;
    }


    protected IEnumerator CameraFollowCoroutine()
    {
        Transform playerTransform = player.transform;
        Vector3 delta = cam.transform.position - playerTransform.position;
        float originY = cam.transform.position.y;
        while (true)
        {
            yield return new WaitForFixedUpdate();
            Vector3 pos = new Vector3((playerTransform.position + delta).x, originY, -10);
            cam.transform.position = pos;

        }

    }

    public virtual void TriggerEnter(string triggerName)
    {

    }
}
