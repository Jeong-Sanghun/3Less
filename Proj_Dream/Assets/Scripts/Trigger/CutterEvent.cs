﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CutterEvent : MonoBehaviour
{
    public GameObject goCutterDrag;

    // Start is called before the first frame update
    void Start()
    {
        goCutterDrag.GetComponent<Image>().enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnClicked()
    {
        goCutterDrag.GetComponent<Image>().enabled = true;
        gameObject.GetComponent<Image>().enabled = false;
    }
}
