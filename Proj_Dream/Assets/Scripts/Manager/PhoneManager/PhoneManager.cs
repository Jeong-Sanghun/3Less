using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhoneManager : MonoBehaviour
{

    public static PhoneManager singleTon;
    public PhoneMessageManager phoneMessageManager;

    [SerializeField]
    GameObject phoneOpenButton;
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
            Destroy(gameObject);
        }
    }

    public void PhoneOpenButtonActive(bool active)
    {
        phoneOpenButton.SetActive(active);
    }

    public void PhoneMainActiveButton(bool active)
    {
        phoneCanvas.SetActive(active);
        phoneOpenButton.SetActive(!active);
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
        archiveCanvas.SetActive(active);
    }

    
}
