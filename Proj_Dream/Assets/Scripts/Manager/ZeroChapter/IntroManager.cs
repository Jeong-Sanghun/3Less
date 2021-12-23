using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IntroManager : MonoBehaviour
{
    [SerializeField]
    ModuleManager moduleManager;
    GameManager gameManager;

    [SerializeField]
    Image[] cutSceneArray;
    [SerializeField]
    Image fadeInImage;
    [SerializeField]
    Text dialogText;
    [SerializeField]
    Image textFrameImage;
    
    

    string[] dialogs =
    {
        "�ǰ��� ����� ��, �ݿ��� ��������� ����ϱ� ���� �ʰԱ��� ���ϰ� �ִ�.",    //0
        "���� ���� �ʹ�.",//1
        "�ζǸ� ��÷�Ǹ� ȸ�� ����ġ�� ����. ...�ƴ�, ȸ��� �ٴϰ� �߱��� ���� ����.",   //2
        "�ٵ� ���� ���ڱ� �� �����ָ鼭 �߱��϶�� �ϸ� �����?", //3
        "",//4
        "������ ��ü�� ������ �̸����� �������� �Ҵ�. â���� ���� �������� ��� â���� ���� ���� �����´�.", //5
        "�߼��� �ƴѵ� �� ��û ũ��.", //6
        "",//7
        "..��? ���� �� �ֳ�?", //8
        "�����ΰ� ��������...",//9
        "",//10
        "��? �׷� ���...",  //11
    };

    int dialogIndex;
    bool isChanging = false;
    int nowCutSceneIndex;

    // Start is called before the first frame update
    void Start()
    {
        gameManager = GameManager.singleTon;
        dialogIndex = 0;
        nowCutSceneIndex = 0;
        StartCoroutine(moduleManager.FadeModule_Image(fadeInImage, 1, 0, 1));
        StartCoroutine(moduleManager.FadeModule_Image(textFrameImage, 0, 1, 1));
        Invoke("NextDialog", 1);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {

            if (moduleManager.nowTexting == false && isChanging == false)
            {
                NextDialog();
            }

        }
    }

    void NextDialog()
    {

        switch (dialogIndex)
        {

            case 4:
            case 7:
            case 10:
                StartCoroutine(moduleManager.FadeModule_Image(cutSceneArray[nowCutSceneIndex], 1, 0, 1));
                StartCoroutine(moduleManager.FadeModule_Image(cutSceneArray[++nowCutSceneIndex], 0, 1, 1));
                StartCoroutine(moduleManager.FadeModule_Image(textFrameImage, 1, 0, 1));
                StartCoroutine(moduleManager.FadeModule_Text(dialogText, 1, 0, 1));
                isChanging = true;
                Invoke("SetChangeFalse", 1);
                dialogIndex++;
                return;
            case 5:
            case 8:
            case 11:
                StartCoroutine(moduleManager.FadeModule_Image(textFrameImage, 0, 1, 1));
                dialogText.text = "";
                StartCoroutine(moduleManager.FadeModule_Text(dialogText, 0, 1, 1));
                break;
            default:
                break;

        }

        StartCoroutine(moduleManager.LoadTextOneByOne(dialogs[dialogIndex], dialogText));
        if(dialogIndex != 11)
        {
            dialogIndex++;
        }
        else
        {
            isChanging = true;
            Invoke("SceneEnd", 1);
        }
        
    }

    void SetChangeFalse()
    {
        isChanging = false;
    }

    void SceneEnd()
    {
        gameManager.LoadScene(SceneName.Bright);
    }
}
