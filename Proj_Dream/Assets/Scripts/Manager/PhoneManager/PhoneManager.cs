using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class PhoneManager : MonoBehaviour
{

    public static PhoneManager singleTon;
    public PhoneMessageManager phoneMessageManager;
    public PhoneArchiveManager phoneArchiveManager;
   
    public Vector2 phoneDownPos;
    public Vector2 phoneUpPos;

    [SerializeField]
    GameObject phoneOpenButton;
    [SerializeField]
    RectTransform wholeCanvasBackGroundRect;
    [SerializeField]
    EventTrigger handle;
    [SerializeField]
    GameObject messageCanvas;
    [SerializeField]
    GameObject twitterCanvas;
    [SerializeField]
    GameObject instagramCanvas;
    [SerializeField]
    GameObject archiveCanvas;
    [SerializeField]
    GameObject phoneCanvas;

    bool isOpened;
    bool phoneMoving;
    bool isTouching;
    float positionDelta;
    // Start is called before the first frame update
    void Awake()
    {
        if(singleTon == null)
        {
            singleTon = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Debug.Log("디스트로이");
            Destroy(gameObject);
        }
    }

    public void Flush()
    {
        phoneMessageManager.SetMessage();
        phoneArchiveManager.SetArchive();
    }

    private void Start()
    {
        phoneDownPos = new Vector2(0, -409.6f);
        phoneUpPos = new Vector2(0, 618f);
        isTouching = false;
        positionDelta = 100000;
        isOpened = false;

        EventTrigger.Entry entry1 = new EventTrigger.Entry();
        entry1.eventID = EventTriggerType.PointerUp;
        entry1.callback.AddListener((data) => { PointerUp((PointerEventData)data, wholeCanvasBackGroundRect); });
        handle.triggers.Add(entry1);

        //버튼 이벤트
        EventTrigger.Entry entry2 = new EventTrigger.Entry();
        entry2.eventID = EventTriggerType.Drag;
        entry2.callback.AddListener((data) => { Swipe((PointerEventData)data, wholeCanvasBackGroundRect); });
        handle.triggers.Add(entry2);

    }

    public void PhoneOpenButtonActive(bool active)
    {
        phoneOpenButton.SetActive(active);
    }

    public void PhoneMainActiveButton()
    {
        if(isOpened == true)
        {
            StartCoroutine(PhoneMove(false, wholeCanvasBackGroundRect));
        }
        else
        {
            phoneOpenButton.SetActive(false);
            StartCoroutine(PhoneMove(true, wholeCanvasBackGroundRect));
        }
    }

    public void MessageActiveButton(bool active)
    {
        messageCanvas.SetActive(active);
        phoneCanvas.SetActive(!active);
    }
    public void TwitterActiveButton(bool active)
    {
        twitterCanvas.SetActive(active);
    }
    public void InstagramActiveButton(bool active)
    {
        instagramCanvas.SetActive(active);
    }
    public void ArchiveActiveButton(bool active)
    {
        phoneCanvas.SetActive(!active);
        archiveCanvas.SetActive(active);
    }

    public void Swipe(PointerEventData data, RectTransform rect)
    {
        float yPos = Input.mousePosition.y - Screen.height / 2;
        if(positionDelta == 100000)
        {
            positionDelta = rect.anchoredPosition.y - yPos;
        }
        rect.anchoredPosition = new Vector2(0, yPos + positionDelta);
        isTouching = true;
    }

    public void PointerUp(PointerEventData data, RectTransform rect)
    {
        float yPos = rect.anchoredPosition.y;
        positionDelta = 100000;
        isTouching = false;
        if(yPos>(phoneDownPos.y + phoneUpPos.y / 2)+150)
        {
            StartCoroutine(PhoneMove(false, rect));
        }
        else if(yPos<phoneDownPos.y)
        {
            StartCoroutine(PhoneMove(false, rect));
        }
        else if (yPos > phoneUpPos.y)
        {
            StartCoroutine(PhoneMove(true, rect));
        }
        else
        {
            StartCoroutine(PhoneMove(true, rect));
        }

    }

    IEnumerator PhoneMove(bool isOpening,RectTransform backGround)
    {

        if(phoneMoving == false)
        {
            phoneMoving = true;
            Vector2 targetPos;
            float speed = 1000;
            if (isOpening)
            {
                targetPos = phoneDownPos;
                while (backGround.anchoredPosition.y > targetPos.y && isTouching == false)
                {
                    backGround.anchoredPosition =
                        new Vector2(0, backGround.anchoredPosition.y - Time.deltaTime * speed);
                    yield return null;
                }
                if (isTouching == false)
                {
                    phoneOpenButton.SetActive(false);
                    isOpened = true;
                }
                phoneMoving = false;
            }
            else
            {
                targetPos = phoneUpPos;
                while (backGround.anchoredPosition.y < targetPos.y && isTouching == false)
                {
                    backGround.anchoredPosition =
                        new Vector2(0, backGround.anchoredPosition.y + Time.deltaTime * speed);
                    yield return null;
                }
                phoneMoving = false;

                if (isTouching == false)
                {
                    isOpened = false;
                    phoneCanvas.SetActive(true);
                    backGround.anchoredPosition = phoneDownPos;
                    wholeCanvasBackGroundRect.anchoredPosition = phoneUpPos;
                    phoneOpenButton.SetActive(true);
                    phoneMessageManager.ShutDown();
                    phoneArchiveManager.ShutDown();
                }
            }
        }
       




    }

    
}
