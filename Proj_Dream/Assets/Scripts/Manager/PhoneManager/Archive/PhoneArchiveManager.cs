using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PhoneArchiveManager : MonoBehaviour
{
    ArchiveDataWrapper archiveDataWrapper;
    SaveDataClass saveData;
    BackLogBundle backLogBundle;
    
    [SerializeField]
    GameObject wholeArchiveCanvas;

    [SerializeField]
    GameObject oneArchivePrefab;
    [SerializeField]
    Transform oneArchiveParent;
    [SerializeField]
    Transform backLogCanvasParent;
    [SerializeField]
    GameObject backLogCanvasPrefab;
    [SerializeField]
    GameObject backLogOtherPrefab;
    [SerializeField]
    GameObject backLogPlayerPrefab;
    [SerializeField]
    GameObject backLogMoneyGaugePrefab;
    [SerializeField]
    GameObject backLogRoutePrefab;
    [SerializeField]
    GameObject backLogHealthGaugePrefab;

    // Start is called before the first frame update
    void Start()
    {
        JsonManager json = new JsonManager();
        archiveDataWrapper = json.ResourceDataLoad<ArchiveDataWrapper>("ArchiveData");
        saveData = GameManager.singleTon.saveData;
        backLogBundle = null;
        SetArchive();
    }

    void FlushArchive()
    {
        for(int i = 0; i < backLogBundle.backLogWrapperList.Count; i++)
        {
            BackLogWrapper wrapper = backLogBundle.backLogWrapperList[i];
            Destroy(wrapper.backLogCanvas);
            Destroy(wrapper.archiveButtonObject);
        }
    }


    void SetArchive()
    {
        if(backLogBundle != null)
        {
            FlushArchive();
        }
        backLogBundle = saveData.backLogBundle;
        if (backLogBundle == null)
        {
            saveData.backLogBundle = new BackLogBundle();
            backLogBundle = saveData.backLogBundle;
        }
        for (int i = 0; i < backLogBundle.backLogWrapperList.Count; i++)
        {
            NewWrapperAppear(backLogBundle.backLogWrapperList[i]);
        }
    }

    void NewWrapperAppear(BackLogWrapper wrapper)
    {
        OneArchive archive = null;
        wrapper.SetBackLogPair(wrapper.sceneName);
        for (int j = 0; j < archiveDataWrapper.archiveDataList.Count; j++)
        {
            if (archiveDataWrapper.archiveDataList[j].sceneNameEnum == wrapper.sceneName)
            {
                archive = archiveDataWrapper.archiveDataList[j];
                break;
            }

        }
        if (archive == null)
        {
            return;
        }
        GameObject archiveInst = Instantiate(oneArchivePrefab, oneArchiveParent);
        archive.archiveParent = archiveInst;
        wrapper.archiveButtonObject = archiveInst;

        Text archiveSceneName = archiveInst.transform.GetChild(0).GetChild(0).GetComponent<Text>();
        archiveSceneName.text = SceneNameToString.Changer(archive.sceneNameEnum);

        Text archiveText = archiveInst.transform.GetChild(0).GetChild(1).GetComponent<Text>();
        archiveText.text = archive.dialog;

     
        GameObject backLogCanvasInst = Instantiate(backLogCanvasPrefab, backLogCanvasParent);
        wrapper.backLogCanvas = backLogCanvasInst;

        Button backLogOpenButton = archiveInst.transform.GetChild(0).GetComponent<Button>();
        backLogOpenButton.onClick.AddListener(() => BackLogCanvasActive(backLogCanvasInst, true));


        Button backLogGetOutButton = backLogCanvasInst.transform.GetChild(1).GetComponent<Button>();
        backLogGetOutButton.onClick.AddListener(() => BackLogCanvasActive(backLogCanvasInst, false));

        RectTransform backLogParentRect = backLogCanvasInst.transform
            .GetChild(2).GetChild(0).GetChild(0).GetComponent<RectTransform>();
        wrapper.ballonParent = backLogParentRect;
        for (int j = 0; j < wrapper.backLogList.Count; j++)
        {
            OneBackLog backLog = wrapper.backLogList[j];
            SpawnBackLog(backLog, backLogParentRect,wrapper);
        }
        backLogCanvasInst.SetActive(false);
    }

    void BackLogCanvasActive(GameObject backLogCanvas, bool active)
    {
        backLogCanvas.SetActive(active);
    }




    GameObject SpawnBackLog(OneBackLog backLog, RectTransform parentRect,BackLogWrapper wrapper)
    {
        DialogBundle dialogBundle = wrapper.backLogDialogPair.dialogBundle;
        GameObject backLogInst = null;
        Text dialogText = null;
        Text nameText = null;
        switch (backLog.backLogType)
        {
            case BackLogType.Talk:
                backLog.dialog = dialogBundle.dialogList[backLog.dialogIndex].dialog;
                if(backLog.character == Character.Player)
                {
                    backLogInst = Instantiate(backLogPlayerPrefab, parentRect);
                    dialogText = backLogInst.transform.GetChild(0).GetChild(0).GetComponent<Text>();
                }
                else if(backLog.character == Character.System
                    || backLog.character == Character.Narator)
                {
                    backLogInst = Instantiate(backLogPlayerPrefab, parentRect);
                    dialogText = backLogInst.transform.GetChild(0).GetChild(0).GetComponent<Text>();
                }
                else
                {
                    backLogInst = Instantiate(backLogOtherPrefab, parentRect);
                    dialogText = backLogInst.transform.GetChild(1).GetChild(0).GetComponent<Text>();
                    nameText = backLogInst.transform.GetChild(0).GetChild(0).GetComponent<Text>();
                    nameText.text = CharacterEnumToString.Changer(backLog.character);
                }
                dialogText.text = backLog.dialog;
                break;
            case BackLogType.Route:
                backLog.dialog = dialogBundle.dialogList[backLog.dialogIndex].routeList[backLog.choosedRouteIndex];
                backLogInst = Instantiate(backLogRoutePrefab, parentRect);
                dialogText = backLogInst.transform.GetChild(0).GetChild(0).GetComponent<Text>();
                dialogText.text = backLog.dialog;

                break;
            case BackLogType.HealthGauge:
                backLogInst = Instantiate(backLogHealthGaugePrefab, parentRect);
                dialogText = backLogInst.transform.GetChild(0).GetChild(0).GetComponent<Text>();
                dialogText.text = backLog.dialog;
                break;
            case BackLogType.MoneyGauge:
                backLogInst = Instantiate(backLogMoneyGaugePrefab, parentRect);
                dialogText = backLogInst.transform.GetChild(0).GetChild(0).GetComponent<Text>();
                dialogText.text = backLog.dialog;
                break;
        }
        backLog.backLogBallonObject = backLogInst;
        return backLogInst;
    }

    public void AddTalkBackLog(SceneName scene, BackLogType backLogType, Character character, int dialogIndex,int change = -1,int routeIndex = -1)
    {
        BackLogWrapper wrapper = null;
        for (int i = 0; i < backLogBundle.backLogWrapperList.Count; i++)
        {
            if(scene == backLogBundle.backLogWrapperList[i].sceneName)
            {
                wrapper = backLogBundle.backLogWrapperList[i];
                break;
            }
        }

        if (wrapper == null)
        {
            wrapper = new BackLogWrapper();
            wrapper.sceneName = scene;
            backLogBundle.backLogWrapperList.Add(wrapper);
            NewWrapperAppear(wrapper);
        }

        OneBackLog backLog = new OneBackLog();
        wrapper.backLogList.Add(backLog);
        backLog.backLogType = backLogType;
        switch (backLog.backLogType)
        {
            case BackLogType.Talk:
                backLog.SetBackLog(character, dialogIndex);
                break;
            case BackLogType.Route:
                backLog.SetRouteBackLog(dialogIndex, routeIndex);
                break;
            case BackLogType.HealthGauge:
                backLog.SetHealthGaugeLog(change);
                break;
            case BackLogType.MoneyGauge:
                backLog.SetMoneyGaugeLog(change);
                break;
        }
        SpawnBackLog(backLog, wrapper.ballonParent.GetComponent<RectTransform>(), wrapper);


    }

}
