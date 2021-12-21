using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class MemorySceneManagerParent : MonoBehaviour
{
    protected GameManager gameManager;
    protected JsonManager jsonManager;
    protected DialogBundle dialogBundle;
    protected SaveDataClass saveData;
    [SerializeField]
    protected GaugeManager gaugeManager;
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
    GameObject[] routeButtonParentArray;
    GameObject nowRouteButtonParent;
    [SerializeField]
    GameObject routeBlurObject;

    [SerializeField]
    protected GameObject playerObject;

    [SerializeField]
    protected Camera cam;

    [SerializeField]
    protected List<GameObject> ballonList;

    protected SceneName nowScene;

    protected int nowDialogIndex;
    protected bool isDialogStopping;
    bool isStartOfWrapper;
    protected bool isStopActionable;
    bool isRouteButtonAble;
    Dialog routeDialog;
    ActionKeyword nowChoosedRoute;

    bool textFrameTransparent;
    bool isStarted;
    bool dialogEnd;
    Character nowCharacter;
    protected List<ActionClass> nowActionList;

    protected string triggerName;
    protected bool isTrigger;
    protected bool cameraFollowing;
    protected float cameraRightBound;

    protected virtual void Start()
    {
        gameManager = GameManager.singleTon;
        jsonManager = new JsonManager();
        isStartOfWrapper = true;
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
        nowChoosedRoute = ActionKeyword.Null;
        dialogEnd = false;
        isStopActionable = false;
        isDialogStopping = true;
        isStarted = false;
        isRouteButtonAble = false;
        routeDialog = null;
        saveData = gameManager.saveData;
        StartCoroutine(moduleManager.FadeModule_Image(fadeInImage, 1, 0, 0.5f));

        if(gameManager.isNewGame == false)
        {
            nowDialogIndex = saveData.dialogIndex;
            gameManager.isNewGame = true;
        }
        gaugeManager.SetGauge(saveData.moneyGauge, saveData.healthGauge);



    }

    protected virtual void Update()
    {

    }



    public void ScreenTouchEvent()
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

    protected void NextDialog()
    {
        if (dialogEnd == true)
        {
            return;
        }



        Dialog nowDialog = dialogBundle.dialogList[nowDialogIndex];

        if (nowChoosedRoute != ActionKeyword.Null)
        {
            if (nowDialog.actionKeyword != null)
            {
                List<ActionClass> actionClassList = dialogBundle.dialogList[nowDialogIndex].actionList;
                for(int i = 0; i < actionClassList.Count; i++)
                {
                    List<ActionKeyword> actionList = actionClassList[i].actionList;
                    if (actionList.Contains(ActionKeyword.Route))
                    {
                        if (actionList.Contains(nowChoosedRoute))
                        {
                            break;
                        }
                        else if (actionList.Contains(ActionKeyword.End))
                        {
                            nowChoosedRoute = ActionKeyword.Null;
                            break;
                        }
                        else
                        {
                            for (int k = nowDialogIndex; k < dialogBundle.dialogList.Count; k++)
                            {
                                Dialog dialog = dialogBundle.dialogList[k];
                                List<ActionClass> traceActionList = dialog.actionList;
                                if(traceActionList == null)
                                {
                                    continue;
                                }
                                for (int m = 0; m < traceActionList.Count; m++)
                                {
                                    ActionClass action = traceActionList[m];
                                    if (action.actionList.Contains(ActionKeyword.Route) 
                                        && action.actionList.Contains(ActionKeyword.End))
                                    {
                                        nowChoosedRoute = ActionKeyword.Null;
                                        nowDialogIndex = k+1;
                                        if(nowDialogIndex >= dialogBundle.dialogList.Count)
                                        {
                                            nowDialogIndex = dialogBundle.dialogList.Count;
                                            isStartOfWrapper = true;
                                            dialogEnd = true;
                                            StartCoroutine(CheckStopPointTextEnd());
                                            nowActionList = dialogBundle.dialogList[nowDialogIndex-1].actionList;
                                            return;
                                        }
                                        NextDialog();
                                        return;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        


        bool isNewCharacter = false;
        Text nowText = dialogText;
        bool lastTextFrameTransparent = textFrameTransparent;
        if (isStartOfWrapper)
        {
            nowCharacter = nowDialog.characterEnum;
            isNewCharacter = true;
            isStartOfWrapper = false;
        }
        else if (nowDialog.characterEnum != nowCharacter && nowDialog.characterEnum != Character.NotAllocated)
        {
            nowCharacter = nowDialog.characterEnum;
            isNewCharacter = true;
        }


        if (isNewCharacter)
        {
            for (int i = 0; i < ballonList.Count; i++)
            {
                ballonList[i].SetActive(false);
            }
            switch (nowCharacter)
            {
                case Character.Player:
                    TextFrameToggle(true);
                    ballonList[0].SetActive(true);
                    break;
                case Character.Mother:
                    TextFrameToggle(true);
                    ballonList[1].SetActive(true);
                    break;
                case Character.Father:
                    TextFrameToggle(true);
                    ballonList[2].SetActive(true);
                    break;
                case Character.Brother:
                    TextFrameToggle(true);
                    ballonList[3].SetActive(true);
                    break;
                case Character.Narator:
                    TextFrameToggle(true);
                    break;
                case Character.System:
                    TextFrameToggle(false);
                    systemText.gameObject.SetActive(true);
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
            isStartOfWrapper = true;
            StartCoroutine(CheckStopPointTextEnd());
            nowActionList = dialogBundle.dialogList[nowDialogIndex].actionList;
        }
        
        if(nowDialog.routeList != null)
        {
            Debug.Log("여긴되냐");
            isStartOfWrapper = true;
            routeDialog = nowDialog;
            StartCoroutine(CheckRoutePointTextEnd());
            
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
        Debug.Log("스탑포인트");
        List<ActionClass> actionClassList = nowActionList;
        bool immediateStart = false;
        for (int i = 0; i < actionClassList.Count; i++)
        {
            ActionClass nowAction = actionClassList[i];
            List<ActionKeyword> keywordList = nowAction.actionList;
            List<float> parameterList = nowAction.parameterList;
            if (keywordList.Contains(ActionKeyword.ImmediateDialog) || (keywordList.Contains(ActionKeyword.Route)&& !keywordList.Contains(ActionKeyword.End)))
            {
                immediateStart = true;
            }
            OverrideAction(keywordList, parameterList);
        }
        if (immediateStart)
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

    protected virtual void OverrideAction(List<ActionKeyword> keywordList, List<float> parameterList)
    {
        for (int i = 0; i < ballonList.Count; i++)
        {
            ballonList[i].SetActive(false);
        }
        if (keywordList.Contains(ActionKeyword.HealthGauge))
        {
            gaugeManager.ChangeHealthGauge((int)parameterList[0]);
            StartCoroutine(InvokerCoroutine(1, SetDialogStopFalse));
        }
        if (keywordList.Contains(ActionKeyword.MoneyGauge))
        {
            gaugeManager.ChangeMoneyGauge((int)parameterList[0]);
            StartCoroutine(InvokerCoroutine(1, SetDialogStopFalse));
        }


    }



    //트루면 메인프레임이 켜짐.
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
        Debug.Log("인보크" + method.Method.Name);
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

    IEnumerator CheckStopPointTextEnd()
    {
        while (moduleManager.nowTexting)
        {
            yield return null;
        }
        Debug.Log("스타핑 트루");
        isDialogStopping = true;
        isStopActionable = true;
    }

    IEnumerator CheckRoutePointTextEnd()
    {
        isDialogStopping = true;
        while (moduleManager.nowTexting)
        {
            yield return null;
        }
        yield return null;
        while (true)
        {
            if (Input.GetMouseButtonDown(0))
            {
                break;
            }
            yield return null;
        }

        TextFrameToggle(false);
        yield return new WaitForSeconds(0.8f);
        RouteButtonActive();

    }


    protected IEnumerator CameraFollowCoroutine()
    {
        Transform playerTransform = playerObject
            .transform;
        Vector3 delta = cam.transform.position - playerTransform.position;
        float originY = cam.transform.position.y;
        cameraFollowing = true;
        while (cameraFollowing == true)
        {
            yield return new WaitForFixedUpdate();
            Vector3 pos = new Vector3((playerTransform.position + delta).x, originY, -10);
            if (pos.x >= 0.71 && pos.x <= cameraRightBound)
            {
                cam.transform.position = pos;
            }


        }
    }

    public virtual void TriggerEnter(string triggerName)
    {

    }

    protected IEnumerator SceneEndCoroutine(SceneName scene)
    {
        fadeInImage.gameObject.SetActive(true);
        SaveUserData();
        StartCoroutine(moduleManager.FadeModule_Image(fadeInImage, 0, 1, 1));
        yield return new WaitForSeconds(1f);
        gameManager.LoadScene(scene);
    }

    void RouteButtonActive()
    {
        List<string> routeList = routeDialog.routeList;
        nowRouteButtonParent = routeButtonParentArray[routeList.Count - 2];
        routeButtonParentArray[routeList.Count - 2].SetActive(true);
        routeBlurObject.SetActive(true);
        List<Text> routeTextList = new List<Text>();
        isRouteButtonAble = false;
        SaveUserData();

        for(int i = 0; i < routeList.Count; i++)
        {
            GameObject txtObj = nowRouteButtonParent.transform.GetChild(i).GetChild(0).gameObject;
            GameObject imgObj = nowRouteButtonParent.transform.GetChild(i).gameObject;
            Text txt = txtObj.GetComponent<Text>();
            Image img = imgObj.GetComponent<Image>();
            img.color = new Color(1, 1, 1, 0);
            txt.color = new Color(1, 1, 1, 0);
            txt.text = routeList[i];
            StartCoroutine(moduleManager.FadeModule_Image(img, 0, 1, 1));
            StartCoroutine(moduleManager.FadeModule_Text(txt, 0, 1, 1));
        }
        StartCoroutine(InvokerCoroutine(1,RouteButtonAbleTrue));


    }


    public void OnRouteButton(int index)
    {
        if(isRouteButtonAble == true)
        {
            StartCoroutine(ButtonAnimCoroutine(index));
        }
        isRouteButtonAble = false;


    }

    IEnumerator ButtonAnimCoroutine(int index)
    {
        Transform[] childArray = new Transform[nowRouteButtonParent.transform.childCount];
        for(int i = 0; i < childArray.Length; i++)
        {
            childArray[i] = nowRouteButtonParent.transform.GetChild(i);
            Text txt = childArray[i].GetChild(0).GetComponent<Text>();
            if (i != index)
            {
                StartCoroutine(moduleManager.FadeModule_Image(childArray[i].GetComponent<Image>(), 1, 0, 1));
                StartCoroutine(moduleManager.FadeModule_Text(txt, 1, 0, 1));
            }
        }

        Vector3 targetSize = new Vector3(1.1f, 1.1f, 1);
        Vector3 originSize = Vector3.one;
        float timer = 0;
        while (timer < 1)
        {
            timer += Time.deltaTime*3;
            childArray[index].localScale = Vector3.Lerp(originSize, targetSize, timer);
            yield return null;
        }
        timer = 0;
        while (timer < 1)
        {
            timer += Time.deltaTime*3;
            childArray[index].localScale = Vector3.Lerp( targetSize, originSize, timer);
            yield return null;
        }
        childArray[index].localScale = originSize;
        yield return new WaitForSeconds(0.1f);



        isDialogStopping = false;
        nowRouteButtonParent.SetActive(false);
        nowRouteButtonParent = null;
        routeBlurObject.SetActive(false);
        ActionKeyword nowSeqence = ActionKeyword.First;
        switch (index)
        {
            case 0:
                nowSeqence = ActionKeyword.First;
                break;
            case 1:
                nowSeqence = ActionKeyword.Second;
                break;
            case 2:
                nowSeqence = ActionKeyword.Third;
                break;
            case 3:
                nowSeqence = ActionKeyword.Fourth;
                break;
            case 4:
                nowSeqence = ActionKeyword.Fifth;
                break;
            default:
                break;
        }
        nowChoosedRoute = nowSeqence;
        for (int i = nowDialogIndex; i < dialogBundle.dialogList.Count; i++)
        {
            bool found = false;
            Dialog dialog = dialogBundle.dialogList[i];
            if (dialog.actionList == null)
            {
                continue;
            }
            List<ActionClass> actionClassList = dialog.actionList;
            for (int j = 0; j < actionClassList.Count; j++)
            {
                ActionClass action = actionClassList[j];
                if (action.actionList.Contains(ActionKeyword.Route) && action.actionList.Contains(nowSeqence))
                {
                    found = true;
                    nowDialogIndex = i;
                    break;
                }
            }
            if (found == true)
            {
                break;
            }

        }

        NextDialog();
    }

    void RouteButtonAbleTrue()
    {
        isRouteButtonAble = true;
    }

    void SaveUserData()
    {
        saveData.savedScene = nowScene;
        saveData.dialogIndex = nowDialogIndex - 1;
        saveData.healthGauge = gaugeManager.nowHealthGauge;
        saveData.moneyGauge = gaugeManager.nowMoneyGauge;
        gameManager.SaveSaveData();

    }
}
