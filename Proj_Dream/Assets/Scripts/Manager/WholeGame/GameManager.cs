using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public enum SceneName
{
    MainMenu,Intro,Bright,Dark,MemoryHome1,MemoryRestaurant,
    MemoryDarkStreet1,MemoryRooftop1,MemorySchool1,MemoryHome2,
    MemoryHallway1, MemoryBrightStreet1,MemoryHome3,MemoryMyRoom,
    MemorySchool2,MemoryHome4,MemoryBrightStreet2,

    Chapter2Bright,Chapter2Dark,

    MemoryFriendRoom1
}

public class GameManager : MonoBehaviour
{

    public static GameManager singleton;
    public SaveDataClass saveData;
    [SerializeField]
    ModuleManager moduleManager;
    [SerializeField]
    GameObject gameOverCanvas;
    [SerializeField]
    Image gameOverBackGround;
    [SerializeField]
    Image gameOverFish;
    [SerializeField]
    Text[] gameOverTextArray;

    JsonManager jsonManager;

    [HideInInspector]
    public int wholeSceneNumber;
    
    //SNS매니저에서 씀
    public SceneName nowScene;
    [HideInInspector]
    public bool isNewGame;
    [HideInInspector]
    public bool isGameOver;

    // Start is called before the first frame update
    void Awake()
    {
        if(singleton == null)
        {
            singleton = this;
            DontDestroyOnLoad(gameObject);

        }
        else
        {
            Destroy(gameObject);
        }
    }



    private void Start()
    {
        nowScene = SceneName.MainMenu;
        jsonManager = new JsonManager();
        isNewGame = true;
        isGameOver = false;
        wholeSceneNumber = SceneManager.sceneCountInBuildSettings;

        //디버그
        saveData = jsonManager.LoadSaveData();
    }

    public void LoadScene(SceneName scene)
    {
        //StartCoroutine(SceneLoadCoroutine(scene));
        SceneManager.LoadScene((int)scene);
        
        PhoneManager.singleTon.phoneInstagramManager.AddPost(scene);
        PhoneManager.singleTon.phoneTwitterManager.AddPost(scene);
        PhoneManager.singleTon.PhoneMainCanvasActive(false);
        //if ((int)scene >= 4)
        //{
        //    PhoneManager.singleTon.PhoneMainCanvasActive(true);

        //}
        //else
        //{
        //    PhoneManager.singleTon.PhoneMainCanvasActive(false);
        //}

    }

    IEnumerator SceneLoadCoroutine(SceneName scene)
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync((int)scene);
        asyncLoad.allowSceneActivation = false;
        while (!asyncLoad.isDone)
        {
            yield return null;
        }
        asyncLoad.allowSceneActivation = true;

    }

    public void LoadSaveData()
    {
        saveData = jsonManager.LoadSaveData();
        nowScene = saveData.savedScene;
        PhoneManager.singleTon.PhoneSetup();
    }

    public void SaveSaveData()
    {
        jsonManager.SaveJson(saveData);
    }

    public void StartLoadedGame()
    {
        isNewGame = false;
        LoadSaveData();
        LoadScene(saveData.savedScene);
    }

    public void GameOver()
    {
        isGameOver = true;
        gameOverCanvas.SetActive(true);
        for(int i = 0; i < gameOverTextArray.Length; i++)
        {
            gameOverTextArray[i].color = new Color(1, 1, 1, 0);
            StartCoroutine(moduleManager.FadeModule_Text(gameOverTextArray[i], 0, 1, 1));
        }
        gameOverBackGround.color = new Color(0, 0, 0, 0);
        StartCoroutine(moduleManager.FadeModule_Image(gameOverBackGround, 0, 0.93f, 1));
        gameOverFish.color = new Color(1, 1, 1, 0);
        StartCoroutine(moduleManager.FadeModule_Image(gameOverFish, 0, 1, 1));

    }

    public void GameOverBackButton()
    {
        
        StartLoadedGame();
        gameOverCanvas.SetActive(false);
    }

    public void Quit()
    {
        Application.Quit();
    }

}
