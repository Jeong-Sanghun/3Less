using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class StartSceneManager : MonoBehaviour
{
    GameManager gameManager;
    [SerializeField]
    GameObject backGround;
    [SerializeField]
    Image fadeObject;
    [SerializeField]
    ModuleManager moduleManager;
    [SerializeField]
    GameObject logoObject;
    [SerializeField]
    GameObject logoTarget;

    bool isButtonAble = false;
    // Start is called before the first frame update
    void Start()
    {
        gameManager = GameManager.singleTon;
        StartCoroutine(StartingCoroutine());
    }

    public void StartNewButton()
    {
        if (!isButtonAble)
        {
            return;
        }
        gameManager.saveData = new SaveDataClass();
        gameManager.SaveSaveData();
        gameManager.LoadScene(SceneName.Intro);

    }

    public void StartLoadButton()
    {
        if (!isButtonAble)
        {
            return;
        }
        gameManager.StartLoadedGame();
    }
    // Update is called once per frame
    void Update()
    {
        Vector3 pos = backGround.transform.position;
        pos.x -= Time.deltaTime;
        if (pos.x <= -33)
        {
            pos.x = 33;
        }
        backGround.transform.position = pos;
    }

    IEnumerator StartingCoroutine()
    {
        Image logoImage = logoObject.GetComponent<Image>();
        logoImage.color = new Color(1, 1, 1, 0);

        StartCoroutine(moduleManager.FadeModule_Image(logoImage, 0, 1, 1));
        yield return new WaitForSeconds(2f);

        StartCoroutine(moduleManager.FadeModule_Image(fadeObject, 1, 0, 1));
        StartCoroutine(moduleManager.MoveModule_Linear(logoObject,logoTarget.transform.position,1));
        yield return new WaitForSeconds(1);
        isButtonAble = true;

    }
}
