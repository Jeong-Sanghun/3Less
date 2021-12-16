using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
public class FirstSceneManager : MonoBehaviour
{
    // Start is called before the first frame update
    JsonManager jsonManager;
    DialogBundle dialogBundle;
    [SerializeField]
    ModuleManager moduleManager;
    [SerializeField]
    Image fadeInImage;
    [SerializeField]
    Image textFrameImage;
    [SerializeField]
    Text dialogText;
    [SerializeField]
    Text systemText;

    [SerializeField]
    PlayController player;
    [SerializeField]
    FishState1 fishState;

    [SerializeField]
    GameObject playerBalloon;
    [SerializeField]
    GameObject fishBalloon;

    [SerializeField]
    Camera cam;
    Vector3 camStartPos;
    Vector3 camZoomPos;

    int nowDialogIndex;
    bool isDialogStopping;
    Dialog lastDialog;
    int nowDialogStopPoint;
    int nowStopActionIndex;
    bool isStopActionable;

    bool textFrameTransparent;
    bool isStarted;
    bool dialogEnd;



    void Start()
    {
        jsonManager = new JsonManager();
        dialogBundle = jsonManager.ResourceDataLoad<DialogBundle>("FirstChapter1");
        dialogBundle.SetCharacterEnum();
        lastDialog = null;
        nowDialogStopPoint = -1;
        fadeInImage.gameObject.SetActive(true);
        fadeInImage.color = new Color(0, 0, 0, 1);
        textFrameImage.color = new Color(1, 1, 1, 0);
        dialogText.text = "";
        systemText.text = "";
        playerBalloon.SetActive(false);
        fishBalloon.SetActive(false);
        dialogEnd = false;
        camStartPos = cam.transform.localPosition;
        camZoomPos = new Vector3(17.64627f, 16.42367f, -10);
        isStopActionable = true;

        StartCoroutine(moduleManager.AfterRunCoroutine(1,moduleManager.FadeModule_Image(textFrameImage, 0, 1, 0.5f)));
        isStarted = false;
        StartCoroutine(InvokerCoroutine(1, NextDialog));

        
    }

    // Update is called once per frame
    void Update()
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
            else if(isStopActionable && !moduleManager.nowTexting)
            {
                OnStopPoint();
            }


            
        }

        
    }


    void NextDialog()
    {
        Dialog nowDialog = dialogBundle.dialogList[nowDialogIndex];
        bool isNewCharacter = false;
        Text nowText = dialogText;
        bool lastTextFrameTransparent = textFrameTransparent;
        if(lastDialog == null)
        {
            isNewCharacter = true;
        }
        else if(nowDialog.characterEnum != lastDialog.characterEnum)
        {
            isNewCharacter = true;
        }

        if (isNewCharacter)
        {
            switch (nowDialog.characterEnum)
            {
                case Character.Player:
                        TextFrameToggle(true);
                    playerBalloon.SetActive(true);
                    fishBalloon.SetActive(false);
                    break;
                case Character.Fish:
                    TextFrameToggle(true);
                    playerBalloon.SetActive(false);
                    fishBalloon.SetActive(true);
                    break;
                case Character.Narator:
                    TextFrameToggle(true);
                    playerBalloon.SetActive(false);
                    fishBalloon.SetActive(false);
                    break;
                case Character.System:
                    TextFrameToggle(false);
                    systemText.gameObject.SetActive(true);
                    playerBalloon.SetActive(false);
                    fishBalloon.SetActive(false);
                    nowText = systemText;
                    break;
                case Character.NotAllocated:
                    //이거도 위랑 연속적인거여서 아무것도 안해도됨.
                    break;
                default:
                    //일단 암것도 하지말아봐.
                    break;
            }
        }

        if(nowDialog.dialog != null)
        {
            if(lastTextFrameTransparent != textFrameTransparent)
            {
                StartCoroutine(moduleManager.
              AfterRunCoroutine(0.8f, moduleManager.LoadTextOneByOne(nowDialog.dialog, nowText)));

            }
            else
            {
                StartCoroutine(moduleManager.LoadTextOneByOne(nowDialog.dialog, nowText));

            }
        }

        if (nowDialog.stopPoint == 1)
        {
            isDialogStopping = true;
            isStopActionable = true;
            nowDialogStopPoint++;
            nowStopActionIndex = 0;
        }

        
        if(nowDialogIndex == dialogBundle.dialogList.Count)
        {
            isDialogStopping = true;
            dialogEnd = true;
        }
        else
        {
            nowDialogIndex++;
        }



    }

    void OnStopPoint()
    {
        switch (nowDialogStopPoint)
        {
            case 0:
                isStopActionable = false;
                StartCoroutine(moduleManager.FadeModule_Image(fadeInImage, 1, 0, 1));
                TextFrameToggle(false);
                StartCoroutine(InvokerCoroutine(1, SetDialogStopFalse));
                break;
            case 1:
                StartCoroutine(CameraZoomCoroutine());
                nowStopActionIndex++;
                break;
            case 2:
                systemText.text = "";
                systemText.gameObject.SetActive(false);
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                isDialogStopping = false;
                break;
        }
    }




    //트루면 메인프레임이 켜짐.
    void TextFrameToggle(bool mainActive)
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

    IEnumerator InvokerCoroutine(float time, Action method)
    {
        yield return new WaitForSeconds(time);
        isStarted = true;
        method();
    }

    void SetStopActionableTrue()
    {
        isStopActionable = true;
    }

    void SetDialogStopFalse()
    {
        isDialogStopping = false;
    }

    IEnumerator CameraZoomCoroutine()
    {
        float timer = 0;
        float startOrtho = cam.orthographicSize;
        float endOrtho = 5.4f;
        isStopActionable = false;

        while (timer < 1)
        {
            timer += Time.deltaTime / 3f;
            yield return null;
            cam.transform.localPosition = Vector3.Lerp(camStartPos, camZoomPos, timer);
            cam.orthographicSize = Mathf.Lerp(startOrtho, endOrtho, timer);
        }
        cam.transform.localPosition = camZoomPos;
        cam.orthographicSize = endOrtho;
        isDialogStopping = false;

    }
}
