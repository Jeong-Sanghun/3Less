using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class PhoneSnsManager : MonoBehaviour
{
    PhoneManager phoneManager;
    PostDataBundle postDataBundle;
    PostWrapper postWrapper;
    [SerializeField]
    GameObject onePostPrefab;
    [SerializeField]
    Transform onePostParent;

    [SerializeField]
    GameObject wholeSnsCanvas;

    [SerializeField]
    EventTrigger handle;
    [SerializeField]
    RectTransform wholeCanvasBackGroundRect;

    [SerializeField]
    bool isTwitter;
    


    void Start()
    {
        JsonManager json = new JsonManager();
        if (isTwitter)
        {
            postDataBundle = json.ResourceDataLoad<PostDataBundle>("TwitterDataBundle");
        }
        else
        {
            postDataBundle = json.ResourceDataLoad<PostDataBundle>("InstagramDataBundle");
        }
        phoneManager = PhoneManager.singleTon;

        EventTrigger.Entry entry1 = new EventTrigger.Entry();
        entry1.eventID = EventTriggerType.PointerUp;
        entry1.callback.AddListener((data) => { phoneManager.PointerUp((PointerEventData)data, wholeCanvasBackGroundRect); });
        handle.triggers.Add(entry1);

        //버튼 이벤트
        EventTrigger.Entry entry2 = new EventTrigger.Entry();
        entry2.eventID = EventTriggerType.Drag;
        entry2.callback.AddListener((data) => { phoneManager.Swipe((PointerEventData)data, wholeCanvasBackGroundRect); });
        handle.triggers.Add(entry2);

        SetPost();
    }

    public void SetPost()
    {
        if(postWrapper == null)
        {
            postWrapper = new PostWrapper();
        }
        else
        {
            FlushPost();
        }
        SceneName nowScene = GameManager.singleTon.saveData.savedScene;
        for(int i = 0; i < postDataBundle.postList.Count; i++)
        {
            OnePost post = postDataBundle.postList[i];
            if(post.appearingScene < nowScene)
            {
                AddPost(post);

            }
        }
    }

    void FlushPost()
    {
        for(int i = 0; i < postWrapper.postList.Count; i++)
        {
            OnePost post = postWrapper.postList[i];
            Destroy(post.snsObject);
        }
    }


    void AddPost(OnePost post)
    {
        postWrapper.postList.Add(post);
        GameObject postInst = Instantiate(onePostPrefab, onePostParent);
        post.snsObject = postInst;

        Image profileImage = postInst.transform.GetChild(0).GetComponent<Image>();
        profileImage.sprite = CharacterEnumToSprite.Changer(Character.Player);

        Transform nameGroup = postInst.transform.GetChild(1).GetChild(0);

        Text profileName = nameGroup.GetChild(0).GetComponent<Text>();
        profileName.text = post.profileName;

        Text accountName = nameGroup.GetChild(1).GetComponent<Text>();
        accountName.text = post.accountName;

        Text time = nameGroup.GetChild(2).GetComponent<Text>();
        time.text = post.timeText;

        Text dialog = postInst.transform.GetChild(1).GetChild(1).GetComponent<Text>();
        dialog.text = post.dialog;

        Image contentImage = postInst.transform.GetChild(1).GetChild(2).GetComponent<Image>();
        Sprite postSprite = post.GetSprite();
        if(postSprite == null)
        {
            contentImage.gameObject.SetActive(false);
        }
        else
        {
            contentImage.sprite = postSprite;
        }
        
        

    }

    public void AddPost(SceneName scene)
    {
        for (int i = 0; i < postDataBundle.postList.Count; i++)
        {
            OnePost post = postDataBundle.postList[i];
            if (post.appearingScene < scene && !postWrapper.postList.Contains(post))
            {
                AddPost(post);
            }
        }
    }

    public void ShutDown()
    {

        wholeSnsCanvas.SetActive(false);
    }

}
