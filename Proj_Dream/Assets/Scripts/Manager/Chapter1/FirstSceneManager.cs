using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
public class FirstSceneManager : SceneManagerParent
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
    FishState1 fish;

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
    Character nowCharacter;


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
        camStartPos = cam.transform.position;
        camZoomPos = new Vector3(2.43f, -0.02f, -10);
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
            else if(isStopActionable == true)
            {
                OnStopPoint();
            }
        }

        if (isTrigger)
        {
            isTrigger = false;
            TriggerEnter();
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
            nowCharacter = nowDialog.characterEnum;
            isNewCharacter = true;
        }
        else if(nowDialog.characterEnum != nowCharacter)
        {
            nowCharacter = nowDialog.characterEnum;
            isNewCharacter = true;
        }

        if (isNewCharacter)
        {
            switch (nowCharacter)
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
                    systemText.text = nowDialog.dialog;
                    systemText.color = new Color(systemText.color.r, systemText.color.g, systemText.color.b, 0);
                    StartCoroutine(moduleManager.FadeModule_Text(systemText, 0, 1, 1));

                    StartCoroutine(moduleManager.AfterRunCoroutine(3, moduleManager.FadeModule_Text(systemText, 1, 0, 1)));
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
        if (nowDialog.stopPoint == 1)
        {
            isDialogStopping = true;
            isStopActionable = false;
            StartCoroutine(InvokerCoroutine(0.5f, SetStopActionableTrue));
            nowDialogStopPoint++;
            nowStopActionIndex = 0;
            playerBalloon.SetActive(false);
            fishBalloon.SetActive(false);

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
        Debug.Log("스탑포인트");
        switch (nowDialogStopPoint)
        {
            case 0:
                
                isStopActionable = false;
                StartCoroutine(moduleManager.FadeModule_Image(fadeInImage, 1, 0, 1));
                TextFrameToggle(false);
                StartCoroutine(InvokerCoroutine(1, SetDialogStopFalse));
                break;
            case 1:
                isStopActionable = false;
                TextFrameToggle(false);
                StartCoroutine(CameraZoomCoroutine());
                nowStopActionIndex++;
                break;
            case 2:
                isStopActionable = false;
                player.isPlayPossible = true;
                break;
            case 3:
                isStopActionable = false;
                TextFrameToggle(false);
                player.isPlayPossible = false;
                FishFirstComingStopPoint();
                break;
            case 4:
                isStopActionable = false;
                TextFrameToggle(false);
                player.isPlayPossible = false;
                FishSecondComingStopPoint();
                break;
            case 5:
                isStopActionable = false;
                TextFrameToggle(false);
                player.isPlayPossible = true;
                break;
            case 6:
                player.isPlayPossible = true;
                fish.GotoTarget3();
                TextFrameToggle(false);
                break;
            default:
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
        Debug.Log("인보크" + method.Method.Name);
        yield return new WaitForSeconds(time);
        isStarted = true;
        method();
    }

    void SetSystemTextFalse()
    {
        systemText.text = "";
        systemText.gameObject.SetActive(false);
    }

    void SetStopActionableTrue()
    {
        isStopActionable = true;
    }

    void SetDialogStopFalse()
    {
        isDialogStopping = false;
    }

    void FishFirstComingStopPoint()
    {
        player.SetAnim(PlayController.AnimState.Idle);
        fish.GotoTarget1();
        
        StartCoroutine(InvokerCoroutine(2, NextDialog));
    }

    void FishSecondComingStopPoint()
    {
        player.SetAnim(PlayController.AnimState.Idle);
        fish.GotoTarget2();
        StartCoroutine(InvokerCoroutine(2, NextDialog));

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

    void TriggerEnter()
    {
        if (triggerName.Contains("Trigger1") && nowDialogStopPoint == 2)
        {
            isDialogStopping = false;
            player.SetAnim(PlayController.AnimState.Idle);
            NextDialog();
            player.isPlayPossible = false;
        }
        else if (triggerName.Contains("Trigger2") && nowDialogStopPoint == 5)
        {
            isDialogStopping = false;
            player.SetAnim(PlayController.AnimState.Idle);
            NextDialog();
            player.isPlayPossible = false;
        }
        else if (triggerName.Contains("Trigger5") && nowDialogStopPoint == 6)
        {
            NextDialog();
            isDialogStopping = true;
        }
    }

    IEnumerator CameraFollowCoroutine()
    {
        Transform playerTransform = player.transform;
        Vector3 delta =cam.transform.position - playerTransform.position;
        float originY = cam.transform.position.y;
        while (true)
        {
            yield return new WaitForFixedUpdate();
            Vector3 pos = new Vector3((playerTransform.position + delta).x, originY, -10);
            cam.transform.position = pos;

        }

    }
}
