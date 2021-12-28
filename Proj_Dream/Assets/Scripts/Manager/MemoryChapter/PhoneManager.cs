using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PhoneManager : MemorySceneManagerParent
{

    [SerializeField]
    RectTransform phoneParentRect;
    [SerializeField]
    RectTransform wholeChatParentRect;
    [SerializeField]
    RectTransform playerChatParentRect;
    [SerializeField]
    RectTransform otherChatParentRect;
    [SerializeField]
    GameObject otherChatPrefab;
    [SerializeField]
    GameObject playerChatPrefab;
    Vector2 nowPlayerSpawnPos;
    Vector2 nowOtherSpawnPos;

    protected override void Start()
    {
        base.Start();
        nowPlayerSpawnPos = Vector2.zero;
        nowOtherSpawnPos = Vector2.zero;
    }

    protected override void NextDialog()
    {
        if (isPhoneOn)
        {
            ChatDialog();
        }
        else
        {
            base.NextDialog();
        }
    }

    protected override void OverrideAction(List<ActionKeyword> keywordList, List<float> parameterList)
    {

        base.OverrideAction(keywordList, parameterList);

        if (keywordList.Contains(ActionKeyword.PhoneOn))
        {
            isPhoneOn = true;
            StartCoroutine(moduleManager.VolumeModule(blurVolume, true, 1));
            StartCoroutine(moduleManager.MoveModuleRect_Linear(phoneParentRect.gameObject, Vector3.zero, 0.5f));
            isStopActionable = false;
            StartCoroutine(InvokerCoroutine(1,SetDialogStopFalse));
        }

        if (keywordList.Contains(ActionKeyword.PhoneOff))
        {
            isPhoneOn = false;
            StartCoroutine(moduleManager.VolumeModule(blurVolume, false, 1));
            StartCoroutine(moduleManager.MoveModuleRect_Linear(phoneParentRect.gameObject, new Vector3(0,1062,0), 0.5f));
            isStopActionable = false;
            StartCoroutine(InvokerCoroutine(1,SetDialogStopFalse));

        }
    }

    void ChatDialog()
    {


        Dialog nowDialog = dialogBundle.dialogList[nowDialogIndex];

        Text nowText = dialogText;
        if (nowDialog.characterEnum != nowCharacter && nowDialog.characterEnum != Character.NotAllocated)
        {
            nowCharacter = nowDialog.characterEnum;
        }
        isDialogStopping = true;
        switch (nowCharacter)
        {
            case Character.Player:
                StartCoroutine(SpawnPlayerChat());
                break;
            default:
                StartCoroutine(SpawnOtherChat());
                //일단 암것도 하지말아봐.
                break;
        }
        if (nowDialog.actionKeyword != null)
        {
            nowActionList = dialogBundle.dialogList[nowDialogIndex].actionList;
            isDialogStopping = true;
            StartCoroutine(InvokerCoroutine(1, SetStopActionableTrue));
        }
        else
        {
            StartCoroutine(InvokerCoroutine(1, SetDialogStopFalse));
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

    IEnumerator SpawnPlayerChat()
    {
        Dialog nowDialog = dialogBundle.dialogList[nowDialogIndex];
        GameObject chatInst = Instantiate(playerChatPrefab, playerChatParentRect);
        RectTransform chatRect = chatInst.GetComponent<RectTransform>();
        chatRect.anchoredPosition = new Vector3(10000, 10000);
        Text chatText = chatInst.transform.GetChild(0).GetComponent<Text>();
        chatText.text = nowDialog.dialog;
        yield return new WaitForSeconds(0.1f);
        float height = chatRect.sizeDelta.y;
       
        nowPlayerSpawnPos.y -= height + 40;
        nowOtherSpawnPos.y -= height + 40;
        chatRect.anchoredPosition = nowPlayerSpawnPos;
        Vector2 wholePos = wholeChatParentRect.anchoredPosition;
        wholePos.y += height + 40;
        wholeChatParentRect.anchoredPosition = wholePos;

    }

    IEnumerator SpawnOtherChat()
    {
        Dialog nowDialog = dialogBundle.dialogList[nowDialogIndex];
        GameObject chatInst = Instantiate(otherChatPrefab, otherChatParentRect);
        RectTransform chatRect = chatInst.GetComponent<RectTransform>();
        chatRect.anchoredPosition = new Vector3(10000, 10000);
        Text chatText = chatInst.transform.GetChild(0).GetComponent<Text>();
        chatText.text = nowDialog.dialog;
        yield return new WaitForSeconds(0.1f);
        float height = chatRect.sizeDelta.y;
        
        nowPlayerSpawnPos.y -= height + 40;
        nowOtherSpawnPos.y -= height + 40;
        chatRect.anchoredPosition = nowOtherSpawnPos;
        Vector2 wholePos = wholeChatParentRect.anchoredPosition;
        wholePos.y += height + 40;
        wholeChatParentRect.anchoredPosition = wholePos;

    }


}
