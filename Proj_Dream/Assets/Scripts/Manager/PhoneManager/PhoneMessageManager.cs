using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class PhoneMessageManager : MonoBehaviour
{
    PhoneManager phoneManager;
    GameManager gameManager;
    SaveDataClass saveData;
    MessageBundle messageBundle;
    [SerializeField]
    GameObject messageCanvasPrefab;
    [SerializeField]
    Transform messageCanvasParent;
    [SerializeField]
    GameObject otherMessagePrefab;
    [SerializeField]
    GameObject playerMessagePrefab;
    [SerializeField]
    GameObject messageListButtonPrefab;
    [SerializeField]
    Transform messageListButtonParent;



    private void Start()
    {
        phoneManager = PhoneManager.singleTon;
        gameManager = GameManager.singleTon;
        saveData = gameManager.saveData;
    }

    void SetMessage()
    {
        if(messageBundle != null)
        {
            FlushMessage();
        }
        messageBundle = saveData.messageBundle;
        for (int i = 0; i < messageBundle.messageWrapperList.Count; i++)
        {
            MessageWrapper wrapper = messageBundle.messageWrapperList[i];
            wrapper.canvasOpenButton = Instantiate(messageListButtonPrefab, messageListButtonParent);
            Button listButton = wrapper.canvasOpenButton.GetComponent<Button>();
            listButton.onClick.AddListener(wrapper.CanvasOpen);

            wrapper.messageCanvas = Instantiate(messageCanvasPrefab, messageCanvasParent);
            wrapper.messageCanvas.SetActive(false);
            RectTransform messageParent = wrapper.messageCanvas.transform.GetChild(1).GetChild(0).GetChild(0).GetComponent<RectTransform>();
            for (int  j = 0; j < wrapper.messageList.Count; j++)
            {
                OneMessage message = wrapper.messageList[j];
                if(message.isPlayer == true)
                {
                    message.SetObject(SpawnPlayerChat(message, messageParent));
                }
                else
                {
                    message.SetObject(SpawnOtherChat(message, messageParent, wrapper));
                }
            }
        }
    }

    public void AddMessage(Dialog dialog, Character character)
    {
        int wrapperIndex = -1;
        for(int i = 0; i < messageBundle.messageWrapperList.Count; i++)
        {
            MessageWrapper wrapper = messageBundle.messageWrapperList[i];
            if (wrapper.character == character)
            {
                wrapperIndex = i;
                break;
            }
        }

        if(wrapperIndex == -1)
        {
            MessageWrapper wrapper = new MessageWrapper();
            messageBundle.messageWrapperList.Add(wrapper);
            wrapper.canvasOpenButton = Instantiate(messageListButtonPrefab, messageListButtonParent);
            Button listButton = wrapper.canvasOpenButton.GetComponent<Button>();
            listButton.onClick.AddListener(wrapper.CanvasOpen);

            wrapper.messageCanvas = Instantiate(messageCanvasPrefab, messageCanvasParent);
            wrapper.messageCanvas.SetActive(false);
            wrapperIndex = messageBundle.messageWrapperList.Count - 1;
        }

        MessageWrapper nowWrapper = messageBundle.messageWrapperList[wrapperIndex];
        RectTransform messageParent = nowWrapper.messageCanvas.transform.GetChild(1).GetChild(0).GetChild(0).GetComponent<RectTransform>();
        OneMessage message;
        
        if (character == Character.Player)
        {
            message = new OneMessage(true,dialog.dialog,DateTime.Now.ToString("hh : mm"));
            message.SetObject(SpawnPlayerChat(message, messageParent));
            
        }
        else
        {
            message = new OneMessage(false, dialog.dialog, DateTime.Now.ToString("hh : mm"));
            message.SetObject(SpawnOtherChat(message, messageParent, nowWrapper));
        }



    }

    void FlushMessage()
    {
        for(int i = 0; i < messageBundle.messageWrapperList.Count; i++)
        {
            MessageWrapper wrapper = messageBundle.messageWrapperList[i];
            Destroy(wrapper.messageCanvas);
            Destroy(wrapper.canvasOpenButton);
        }
        
    }

    GameObject SpawnPlayerChat(OneMessage message,RectTransform parentRect)
    {
        GameObject chatInst = Instantiate(playerMessagePrefab, parentRect);
        RectTransform chatRect = chatInst.GetComponent<RectTransform>();
        // chatRect.anchoredPosition = new Vector3(10000, 10000);
        Text chatText = chatInst.transform.GetChild(1).GetChild(0).GetComponent<Text>();
        chatText.text = message.dialog;
        LayoutRebuilder.ForceRebuildLayoutImmediate(parentRect);
        return chatInst.gameObject;
    }

    GameObject SpawnOtherChat(OneMessage message, RectTransform parentRect,MessageWrapper wrapper)
    {
        GameObject chatInst = Instantiate(otherMessagePrefab, parentRect);
        RectTransform chatRect = chatInst.GetComponent<RectTransform>();
        //  chatRect.anchoredPosition = new Vector3(10000, 10000);
        Text chatText = chatInst.transform.GetChild(1).GetChild(0).GetChild(1).GetChild(0).GetComponent<Text>();
        chatText.text = message.dialog;
        Text profileText = chatInst.transform.GetChild(1).GetChild(0).GetChild(0).GetComponent<Text>();
        profileText.text = CharacterEnumToString.Changer(wrapper.character);
        RectTransform layoutRect = chatInst.transform.GetChild(1).GetChild(0).GetChild(1).GetComponent<RectTransform>();
        LayoutRebuilder.ForceRebuildLayoutImmediate(layoutRect);
        layoutRect = chatInst.transform.GetChild(1).GetChild(0).GetComponent<RectTransform>();
        LayoutRebuilder.ForceRebuildLayoutImmediate(layoutRect);
        layoutRect = chatInst.transform.GetChild(1).GetComponent<RectTransform>();
        LayoutRebuilder.ForceRebuildLayoutImmediate(layoutRect);
        LayoutRebuilder.ForceRebuildLayoutImmediate(parentRect);
        return chatInst.gameObject;
    }

}
