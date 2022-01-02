using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhoneSnsManager : MonoBehaviour
{

    PostDataBundle postDataBundle;
    [SerializeField]
    GameObject onePostPrefab;
    [SerializeField]
    Transform onePostParent;
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
        
    }

 
    void Update()
    {
        
    }
}
