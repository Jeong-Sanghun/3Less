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
    Character nowCharacter;


    private void Start()
    {
        phoneManager = PhoneManager.singleTon;
        gameManager = GameManager.singleTon;
        saveData = gameManager.saveData;
        SetMessage();
    }

    void SetMessage()
    {
        if(messageBundle != null)
        {
            FlushMessage();
        }
        messageBundle = saveData.messageBundle;
        if(messageBundle == null)
        {
            saveData.messageBundle = new MessageBundle();
            messageBundle = saveData.messageBundle;
        }
        for (int i = 0; i < messageBundle.messageWrapperList.Count; i++)
        {
            MessageWrapper wrapper = messageBundle.messageWrapperList[i];
            wrapper.canvasOpenButton = Instantiate(messageListButtonPrefab, messageListButtonParent);
            Button listButton = wrapper.canvasOpenButton.transform.GetChild(1).GetComponent<Button>();
            int deleIndex = i;
            listButton.onClick.AddListener(()=>OpenMessageCanvas(deleIndex));

            Text listText = listButton.transform.GetChild(0).GetComponent<Text>();
            listText.text = CharacterEnumToString.Changer(wrapper.character);

            Text previewText = listButton.transform.GetChild(1).GetComponent<Text>();
            int lastIndex = messageBundle.messageWrapperList[i].messageList.Count - 1;
            if(lastIndex>0)
                previewText.text = messageBundle.messageWrapperList[i].messageList[lastIndex].dialog;

            Image profile = wrapper.canvasOpenButton.transform.GetChild(0).GetComponent<Image>();
            profile.sprite = CharacterEnumToSprite.Changer(wrapper.character);

            wrapper.messageCanvas = Instantiate(messageCanvasPrefab, messageCanvasParent);
            wrapper.messageCanvas.SetActive(false);
            Button getOutButton = wrapper.messageCanvas.transform.GetChild(3).GetComponent<Button>();
            int dele = i;
            getOutButton.onClick.AddListener(()=>CloseMessageCanvas(dele));

            Image canvasProfile = wrapper.messageCanvas.transform.GetChild(4).GetComponent<Image>();
            canvasProfile.sprite = CharacterEnumToSprite.Changer(wrapper.character);

            Text name = wrapper.messageCanvas.transform.GetChild(2).GetChild(0).GetComponent<Text>();
            name.text = CharacterEnumToString.Changer(wrapper.character);

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

    public void SetCharacter(Character character)
    {
        if(character == Character.Player)
        {
            Debug.LogError("나자신과의 대화");
        }
        nowCharacter = character;

    }

    public void AddMessage(Dialog dialog, Character character)
    {
        int wrapperIndex = -1;
        for(int i = 0; i < messageBundle.messageWrapperList.Count; i++)
        {
            MessageWrapper wrapper = messageBundle.messageWrapperList[i];
            if (wrapper.character == nowCharacter)
            {
                wrapperIndex = i;
                break;
            }
        }

        if(wrapperIndex == -1)
        {
            MessageWrapper wrapper = new MessageWrapper();
            messageBundle.messageWrapperList.Add(wrapper);
            wrapperIndex = messageBundle.messageWrapperList.Count - 1;
            wrapper.character = nowCharacter;
            wrapper.canvasOpenButton = Instantiate(messageListButtonPrefab, messageListButtonParent);
            Button listButton = wrapper.canvasOpenButton.transform.GetChild(1).GetComponent<Button>();
            int deleIndex = wrapperIndex;
            listButton.onClick.AddListener(()=>OpenMessageCanvas(deleIndex));

            Text listText = listButton.transform.GetChild(0).GetComponent<Text>();
            listText.text = CharacterEnumToString.Changer(nowCharacter);

            Image profile = wrapper.canvasOpenButton.transform.GetChild(0).GetComponent<Image>();
            profile.sprite = CharacterEnumToSprite.Changer(nowCharacter);

            wrapper.messageCanvas = Instantiate(messageCanvasPrefab, messageCanvasParent);
            wrapper.messageCanvas.SetActive(false);
            Button getOutButton = wrapper.messageCanvas.transform.GetChild(3).GetComponent<Button>();
            int dele = wrapperIndex;
            Debug.Log(dele);
            getOutButton.onClick.AddListener(()=>CloseMessageCanvas(dele));

            Image canvasProfile = wrapper.messageCanvas.transform.GetChild(4).GetComponent<Image>();
            canvasProfile.sprite = CharacterEnumToSprite.Changer(nowCharacter);

            Text name = wrapper.messageCanvas.transform.GetChild(2).GetChild(0).GetComponent<Text>();
            name.text = CharacterEnumToString.Changer(nowCharacter);
        }

        MessageWrapper nowWrapper = messageBundle.messageWrapperList[wrapperIndex];
        RectTransform messageParent = nowWrapper.messageCanvas.transform.GetChild(1).GetChild(0).GetChild(0).GetComponent<RectTransform>();
        OneMessage message;

        Text preview = nowWrapper.canvasOpenButton.transform.GetChild(1).GetChild(1).GetComponent<Text>();
        preview.text = dialog.dialog;

        if (character == Character.Player)
        {
            message = new OneMessage(true,dialog.dialog,DateTime.Now.ToString("hh : mm"));
            message.SetObject(SpawnPlayerChat(message, messageParent));

            //RectTransform layoutRect = message.messageObject.transform.GetChild(1).GetChild(0).GetComponent<RectTransform>();
            //LayoutRebuilder.ForceRebuildLayoutImmediate(layoutRect);

        }
        else
        {
            message = new OneMessage(false, dialog.dialog, DateTime.Now.ToString("hh : mm"));
            message.SetObject(SpawnOtherChat(message, messageParent, nowWrapper));
            //RectTransform layoutRect = message.messageObject.transform.GetChild(1).GetChild(0).GetChild(1).GetComponent<RectTransform>();
            //LayoutRebuilder.ForceRebuildLayoutImmediate(layoutRect);
            //layoutRect = message.messageObject.transform.GetChild(1).GetChild(0).GetComponent<RectTransform>();
            //LayoutRebuilder.ForceRebuildLayoutImmediate(layoutRect);
            //layoutRect = message.messageObject.transform.GetChild(1).GetComponent<RectTransform>();
            //LayoutRebuilder.ForceRebuildLayoutImmediate(layoutRect);
        }
        nowWrapper.messageList.Add(message);


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
        Image profileImage = chatInst.transform.GetChild(0).GetComponent<Image>();
        profileImage.sprite = CharacterEnumToSprite.Changer(wrapper.character);
        return chatInst.gameObject;
    }

    void OpenMessageCanvas(int wrapperIndex)
    {
        MessageWrapper nowWrapper = messageBundle.messageWrapperList[wrapperIndex];
        nowWrapper.CanvasOpen();

        for(int i = 0; i < nowWrapper.messageList.Count; i++)
        {
            OneMessage message = nowWrapper.messageList[i];
            if(message.isPlayer == true)
            {
                RectTransform layoutRect = message.messageObject.transform.GetChild(1).GetChild(0).GetComponent<RectTransform>();
                LayoutRebuilder.ForceRebuildLayoutImmediate(layoutRect);
            }
            else
            {
                RectTransform layoutRect = message.messageObject.transform.GetChild(1).GetChild(0).GetChild(1).GetComponent<RectTransform>();
                LayoutRebuilder.ForceRebuildLayoutImmediate(layoutRect);
                layoutRect = message.messageObject.transform.GetChild(1).GetChild(0).GetComponent<RectTransform>();
                LayoutRebuilder.ForceRebuildLayoutImmediate(layoutRect);
                layoutRect = message.messageObject.transform.GetChild(1).GetComponent<RectTransform>();
                LayoutRebuilder.ForceRebuildLayoutImmediate(layoutRect);
            }

        }
        RectTransform messageParent = nowWrapper.messageCanvas.transform.
            GetChild(1).GetChild(0).GetChild(0).GetComponent<RectTransform>();
        LayoutRebuilder.ForceRebuildLayoutImmediate(messageParent);

        messageListButtonParent.gameObject.SetActive(false);
    }

    void CloseMessageCanvas(int wrapperIndex)
    {
        Debug.Log("실행잉안돼용");
        MessageWrapper nowWrapper = messageBundle.messageWrapperList[wrapperIndex];
        nowWrapper.CanvasClose();
        messageListButtonParent.gameObject.SetActive(true);
    }

}
