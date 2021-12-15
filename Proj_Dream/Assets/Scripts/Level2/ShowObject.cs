using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowObject : MonoBehaviour
{
    public LevelManager1 levelManager1;
    public GameObject goCutter;

    public float delayTime;

    public GameObject goCutterImg;

    public GameObject imgBlur;


    public BoxCollider2D mushCol;
    

    // Start is called before the first frame update
    void Start()
    {
        imgBlur.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ShowObj()
    {
        if(levelManager1.isPossibleUseCutter)
        {
            goCutterImg.SetActive(false);
            goCutter.SetActive(true);
            levelManager1.OpenStep1();
            levelManager1.isPossibleUseCutter = false;
            imgBlur.SetActive(true);

            Invoke("ShowCutterButton", delayTime);
        }
        
    }

    void ShowCutterButton()
    {
        imgBlur.SetActive(false);
        levelManager1.ShowCutterButton();
        mushCol.enabled = false;
        gameObject.SetActive(false);
    }
}
