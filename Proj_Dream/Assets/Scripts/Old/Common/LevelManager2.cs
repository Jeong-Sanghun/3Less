using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class LevelManager2 : MonoBehaviour
{
    public GameObject goFadeIn;

    public GameObject goTextFrame;

    public Text textMain;
    public Text textSystem;

    public ScenarioManager scenarioManager;

    public PlayController playController;

    private float delayTime = 1.5f;
    private float delayTimeTalk = 1.5f;

    public FishState1 fishState1;
    public FishState2 fishState2;

    public GameObject goBalloonPlayer;
    public GameObject goBalloonFish;
    public GameObject goBallonMush;

    public bool isTouchPossible;

    private bool isMush1;

    public GameObject goTextSystemFrame;

    public GameObject[] goBubbleArray;

    public GameObject goCutter;
    public GameObject goCutterAnim;

    public GameObject goFadeOut;

    public int currentTextIndex = 0;

    public GameObject[] colliderArray;
    public Image[] imgFlashArray;

    private bool isFlashOn;

    public Button btnNextStep;

    public Font fontTalk;
    public Font fontNar;

    public bool isPossibleUseCutter;

    public bool isOnProcessLevel1;
    public CameraFollow cameraFollow;

    public GameObject btnInputText;

    // Start is called before the first frame update
    void Start()
    {
        btnInputText.SetActive(true);
        isTouchPossible = false;
        isMush1 = false;
        //isFlashOn = true;
        isFlashOn = false;
        isPossibleUseCutter = false;
        isOnProcessLevel1 = false;

        Init();

        imgFlashArray[0].gameObject.SetActive(false);
        imgFlashArray[1].gameObject.SetActive(false);

        goCutter.SetActive(false);

        StartCoroutine(StartMain2());
    }


    void Init()
    {
        Debug.Log("Start Init currentTextIndex  : " + currentTextIndex);

        currentTextIndex = 0;

        goBalloonPlayer.SetActive(false);
        goBalloonFish.SetActive(false);

        if (goBallonMush != null)
        {
            goBallonMush.SetActive(false);
        }


        goFadeIn.SetActive(true);
        goFadeIn.GetComponent<Image>().material.color = new Color(0f, 0f, 0f, 1f);
        //goTextFrame.GetComponent<Image>().material.color = new Color(1f, 1f, 1f, 0f);
    }

    IEnumerator StartMain2()
    {
        HideFrameUI();

        goFadeIn.GetComponent<Image>().material.DOColor(new Color(0f, 0f, 0f, 0f), 3f);
        playController.isPlayPossible = false;

        //  yield return new WaitForSeconds(1f);

        fishState2.GotoNextTarget();

        yield return new WaitForSeconds(6f);

        ShowFrameUI();


        yield return StartCoroutine(ShowTextInteract(scenarioManager.GetScenarioIndex(currentTextIndex), scenarioManager.GetScenarioIndexType(currentTextIndex)));
        currentTextIndex++;
        isTouchPossible = false;
        isMush1 = true;

        yield return new WaitForSeconds(2f);

        HideFrameUI();
    }

    public void TalkState1()
    {
        if (isMush1)
        {
            isMush1 = false;
            isTouchPossible = true;

            GotoNextText();
        }
    }

    //레벨2에서 쓰는거.
    public void GotoNextText()
    {
        if (isTouchPossible == true)
        {
            ShowFrameUI();

            Debug.Log("currentTextIndex : " + currentTextIndex);

            if (currentTextIndex != 1 && currentTextIndex != 13 && currentTextIndex != 25)
            {
                StartCoroutine(ShowTextInteract(
                    scenarioManager.GetScenarioIndex(currentTextIndex), scenarioManager.GetScenarioIndexType(currentTextIndex)));

            }



            currentTextIndex++;

            if (currentTextIndex == 1)
            {
                btnInputText.SetActive(false);
                playController.isPlayPossible = false;
            }


            if (currentTextIndex == 2 || currentTextIndex == 10 || currentTextIndex == 16 || currentTextIndex == 14
                || currentTextIndex == 24)
            {

                isTouchPossible = false;
                playController.isPlayPossible = true;
                Invoke("HideFrameUI", 1.3f);
                //isMush1 = true;

                if (currentTextIndex == 2)
                {
                    isMush1 = true;

                }

                if (currentTextIndex == 14)
                {
                    Debug.Log("EEEEEEEEEEEEEEEEEEEEEEEE");

                    btnNextStep.gameObject.SetActive(false);
                    isTouchPossible = false;

                }



                if (currentTextIndex == 10)
                {
                    // 물고기 이동.
                    fishState2.GotoNextTarget();
                    //     goCutter.SetActive(true);

                    isPossibleUseCutter = true;
                    isMush1 = false;
                    btnInputText.SetActive(false);
                }

                if (currentTextIndex == 15)
                {
                    btnInputText.SetActive(false);
                }



                if (currentTextIndex == 16)
                {
                    btnInputText.SetActive(false);
                    colliderArray[1].SetActive(false);
                    Invoke("HideFrameUI", 1f);
                    Invoke("GotoFishNextStep", 1.5f);
                }

                if (currentTextIndex == 24)
                {
                    colliderArray[2].SetActive(false);



                }


                if (currentTextIndex == scenarioManager.scenarioList2.Count)
                {

                }
            }


            Debug.Log("currentTextIndex : " + currentTextIndex);

            if (currentTextIndex == 11)
            {
                //goCutter.SetActive(true);
                btnInputText.SetActive(true);
                goCutterAnim.SetActive(false);
            }

            if (currentTextIndex == 13)
            {
                isFlashOn = true;
            }


            if (currentTextIndex == 15)
            {
                // isFlashOn = true;
                btnInputText.SetActive(false);
            }


            if (currentTextIndex == 16)
            {
                btnInputText.SetActive(false);
            }


            if (currentTextIndex == 17)
            {
                btnInputText.SetActive(true);
            }


            if (currentTextIndex == 24)
            {
                Debug.Log("25 25 25 25 25 25 25 25");
                Invoke("HideFrameUI", 1f);
                isFlashOn = true;
                btnInputText.SetActive(false);
            }


            if (currentTextIndex == 25)
            {
                Debug.Log("25 25 25 25 25 25 25 25");
                Invoke("HideFrameUI", 1f);
                isFlashOn = true;
            }

            if (currentTextIndex == 26)
            {
                btnNextStep.gameObject.SetActive(false);
                ShowFlashImageText();
            }

            if (currentTextIndex == 58)
            {
                goCutter.GetComponent<MouseDragBehaviour>().isUseDrage = true;

                Debug.Log("DDDDDDDDDDDD Done !!");
                isTouchPossible = false;
                Invoke("HideFrameUI", 1f);
            }

        }
    }


    public void ShowCutterButton()
    {
        goCutter.SetActive(true);
    }

    void GotoFishNextStep()
    {
        fishState2.GotoNextTarget();
    }

    public void StartFadeOut()
    {
        Invoke("FadeOut", 3f);
    }

    void FadeOut()
    {
        goFadeOut.SetActive(true);
    }

    public void OpenStep1()
    {
        colliderArray[0].SetActive(false);
    }




    void ShowFrameUI()
    {
        goTextFrame.GetComponent<Image>().material.DOColor(new Color(1f, 1f, 1f, 1f), 0.7f);
        //goTextFrame.gameObject.SetActive(true);
    }

    public void HideFrameUI()
    {
        goBalloonPlayer.SetActive(false);
        goBalloonFish.SetActive(false);

        if (goBallonMush != null)
        {
            goBallonMush.SetActive(false);
        }


        goTextFrame.GetComponent<Image>().material.DOColor(new Color(1f, 1f, 1f, 0f), 0.7f);
        //goTextFrame.gameObject.SetActive(false);
        textMain.text = "";
        textSystem.text = "";
        if (goTextSystemFrame != null)
        {
            goTextSystemFrame.SetActive(false);
        }
    }


    public void StartTrigger4()
    {
        goFadeOut.SetActive(true);

        StartCoroutine(GotoNextScene(2));

    }

    IEnumerator GotoNextScene(int _index)
    {
        yield return new WaitForSeconds(3f);

        UnityEngine.SceneManagement.SceneManager.LoadScene(_index);
    }


    // Update is called once per frame
    void Update()
    {

    }

    IEnumerator ShowText(string _text, float _delayTime, ScenarioManager.TalkState _talkState)
    {
        textMain.enabled = false;
        textSystem.enabled = false;

        if (goTextSystemFrame != null)
        {
            goTextSystemFrame.SetActive(false);
        }



        goTextFrame.SetActive(false);

        goBalloonPlayer.SetActive(false);
        goBalloonFish.SetActive(false);

        switch (_talkState)
        {
            case ScenarioManager.TalkState.PLAYER:
                goBalloonPlayer.SetActive(true);
                goTextFrame.SetActive(true);
                textMain.enabled = true;
                textMain.font = fontTalk;
                textMain.alignment = TextAnchor.MiddleLeft;
                textMain.rectTransform.localPosition = new Vector3(-82f, -5f, 0f);
                textMain.text = _text.Replace("\\n", "\n");
                break;

            case ScenarioManager.TalkState.NAR:
                goBalloonPlayer.SetActive(false);
                goTextFrame.SetActive(true);
                textMain.enabled = true;
                textMain.font = fontTalk;
                textMain.alignment = TextAnchor.MiddleLeft;
                textMain.rectTransform.localPosition = new Vector3(-82f, -5f, 0f);
                textMain.text = _text.Replace("\\n", "\n");
                break;

            case ScenarioManager.TalkState.SYSTEM:
                if (goTextSystemFrame != null)
                {
                    goTextSystemFrame.SetActive(true);
                }
                textSystem.enabled = true;
                textSystem.text = _text.Replace("\\n", "\n");
                break;

            case ScenarioManager.TalkState.FISH:
                goBalloonFish.SetActive(true);
                goTextFrame.SetActive(true);
                textMain.enabled = true;
                textMain.font = fontTalk;
                textMain.alignment = TextAnchor.MiddleLeft;
                textMain.rectTransform.localPosition = new Vector3(-82f, -5f, 0f);
                textMain.text = _text.Replace("\\n", "\n");
                break;
        }

        //yield return new WaitForSeconds(_delayTime);
        yield return new WaitForSeconds(delayTimeTalk);

        //goBalloonPlayer.SetActive(false);
        //goBalloonFish.SetActive(false);
    }


    IEnumerator ShowTextInteract(string _text, ScenarioManager.TalkState _talkState)
    {
        textMain.enabled = false;
        textSystem.enabled = false;
        if (goTextSystemFrame != null)
        {
            goTextSystemFrame.SetActive(false);
        }
        goTextFrame.SetActive(false);

        goBalloonPlayer.SetActive(false);
        goBalloonFish.SetActive(false);

        if (goBallonMush != null)
        {
            goBallonMush.SetActive(false);
        }


        switch (_talkState)
        {
            case ScenarioManager.TalkState.PLAYER:
                goBalloonPlayer.SetActive(true);
                goTextFrame.SetActive(true);

                textMain.enabled = true;
                textMain.font = fontTalk;
                textMain.alignment = TextAnchor.MiddleLeft;
                //textMain.rectTransform.localPosition = new Vector3(-88f, -55f, 0f);
                textMain.rectTransform.localPosition = new Vector3(-82f, -5f, 0f);
                textMain.text = _text.Replace("\\n", "\n");
                break;

            case ScenarioManager.TalkState.NAR:
                goTextFrame.SetActive(true);
                textMain.enabled = true;
                textMain.font = fontTalk;
                textMain.alignment = TextAnchor.MiddleLeft;
                textMain.rectTransform.localPosition = new Vector3(-82f, -5f, 0f);
                textMain.text = _text.Replace("\\n", "\n");
                break;

            case ScenarioManager.TalkState.SYSTEM:
                if (goTextSystemFrame != null)
                {
                    goTextSystemFrame.SetActive(true);
                }
                textSystem.enabled = true;
                textSystem.text = _text.Replace("\\n", "\n");
                break;

            case ScenarioManager.TalkState.FISH:
                goBalloonFish.SetActive(true);
                goTextFrame.SetActive(true);
                textMain.enabled = true;
                textMain.font = fontTalk;
                textMain.alignment = TextAnchor.MiddleLeft;
                textMain.rectTransform.localPosition = new Vector3(-82f, -5f, 0f);
                textMain.text = _text.Replace("\\n", "\n");
                break;

            case ScenarioManager.TalkState.Mushroom:
                if (goBallonMush != null)
                {
                    goBallonMush.SetActive(true);
                }

                goTextFrame.SetActive(true);
                textMain.enabled = true;
                textMain.font = fontTalk;
                textMain.alignment = TextAnchor.MiddleLeft;
                textMain.rectTransform.localPosition = new Vector3(-82f, -5f, 0f);
                textMain.text = _text.Replace("\\n", "\n");
                break;
        }

        //yield return null;

        yield return new WaitForSeconds(1f);

        //goBalloonPlayer.SetActive(false);
        //goBalloonFish.SetActive(false);
    }

    private int flashImgIndex = 0;

    public void ShowFlashImageText()
    {
        Debug.Log("111111111111");

        if (isFlashOn)
        {
            //Debug.Log("2222222222 :  " + flashImgIndex);

            ShowFrameUI();

            switch (flashImgIndex)
            {
                case 0:
                    imgFlashArray[0].gameObject.SetActive(true);
                    goTextFrame.SetActive(true);
                    textMain.enabled = true;
                    textMain.font = fontTalk; ;
                    textMain.alignment = TextAnchor.MiddleLeft;
                    textMain.rectTransform.localPosition = new Vector3(-88f, -5f, 0f);
                    textMain.text = "오래된 신문 스크랩".Replace("\\n", "\n");
                    isTouchPossible = false;
                    break;

                case 1:
                    imgFlashArray[0].gameObject.SetActive(true);
                    goTextFrame.SetActive(true);
                    textMain.enabled = true;
                    textMain.font = fontTalk; ;
                    textMain.alignment = TextAnchor.MiddleLeft;
                    textMain.rectTransform.localPosition = new Vector3(-88f, -5f, 0f);
                    textMain.text = "손바닥만한 작은 기사. 무대에 선 젊은 남자의 \n사진과 함께 어떤 공연을 홍보하고 있다.".Replace("\\n", "\n");
                    isFlashOn = false;
                    isTouchPossible = false;
                    Invoke("DisableFlashImg1", 2f);


                    break;



                case 2:
                    imgFlashArray[1].gameObject.SetActive(true);
                    goTextFrame.SetActive(true);
                    textMain.enabled = true;
                    textMain.font = fontTalk; ;
                    textMain.alignment = TextAnchor.MiddleLeft;
                    textMain.rectTransform.localPosition = new Vector3(-88f, -5f, 0f);
                    textMain.text = "우리 애가 전국 대회에서 금메달을 땄다니까!".Replace("\\n", "\n");
                    btnNextStep.gameObject.SetActive(false);
                    isTouchPossible = false;
                    break;

                case 3:
                    goTextFrame.SetActive(true);
                    textMain.enabled = true;
                    textMain.font = fontTalk; ;
                    textMain.alignment = TextAnchor.MiddleLeft;
                    textMain.rectTransform.localPosition = new Vector3(-88f, -5f, 0f);
                    textMain.text = "아버지의 커다란 웃음소리가 벽을 넘어왔다.\n주변 지인들에게 전화를 돌리는 모양이었다.".Replace("\\n", "\n");
                    btnNextStep.gameObject.SetActive(false);
                    isTouchPossible = false;
                    break;

                case 4:
                    goTextFrame.SetActive(true);
                    textMain.enabled = true;
                    textMain.font = fontTalk; ;
                    textMain.alignment = TextAnchor.MiddleLeft;
                    textMain.rectTransform.localPosition = new Vector3(-88f, -5f, 0f);
                    textMain.text = "아버지가 그렇게 기뻐하는 모습을 보는 건 정말 오랜만이었다.".Replace("\\n", "\n");
                    isFlashOn = false;
                    btnNextStep.gameObject.SetActive(false);
                    isTouchPossible = false;
                    Invoke("DisableFlashImg2", 1.5f);

                    break;
            }

            flashImgIndex++;

        }
    }




    public void DisableFlashImg1()
    {

        isFlashOn = false;
        imgFlashArray[0].gameObject.SetActive(false);

        colliderArray[1].SetActive(false);
        HideFrameUI();

        StartCoroutine(BubbleFadeOut());

        isTouchPossible = true;
        btnNextStep.gameObject.SetActive(false);



        Invoke("GotoNextText", 1f);
    }


    IEnumerator BubbleFadeOut()
    {
        yield return new WaitForSeconds(3f);

        btnNextStep.gameObject.SetActive(true);
        for (int i = 0; i < goBubbleArray.Length; i++)
        {
            goBubbleArray[i].GetComponent<SpriteRenderer>().material.DOColor(new Color(1f, 1f, 1f, 0f), 2f);
        }

        yield return new WaitForSeconds(2f);

        for (int i = 0; i < goBubbleArray.Length; i++)
        {
            goBubbleArray[i].SetActive(false);
        }
    }

    public void DisableFlashImg2()
    {
        imgFlashArray[1].gameObject.SetActive(false);
        HideFrameUI();

        btnNextStep.gameObject.SetActive(true);


        isTouchPossible = true;
        Invoke("GotoNextText", 1f);

    }

}
