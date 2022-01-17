using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public enum SceneName
{
    MainMenu,Intro,Bright,Dark,MemoryHome1,MemoryRestaurant,
    MemoryDarkStreet1,MemoryRooftop1,MemorySchool1,MemoryHome2,
    MemoryHallway1, MemoryBrightStreet1,MemoryHome3,MemoryMyRoom,
    MemorySchool2,MemoryHome4,MemoryBrightStreet2
}

public class GameManager : MonoBehaviour
{

    public static GameManager singleTon;
    public SaveDataClass saveData;

    JsonManager jsonManager;

    [HideInInspector]
    public int wholeSceneNumber;
    
    //SNS매니저에서 씀
    public SceneName nowScene;
    [HideInInspector]
    public bool isNewGame;
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



    private void Start()
    {
        nowScene = SceneName.MainMenu;
        jsonManager = new JsonManager();
        isNewGame = true;
        wholeSceneNumber = SceneManager.sceneCountInBuildSettings;

    }

    public void LoadScene(SceneName scene)
    {
        //StartCoroutine(SceneLoadCoroutine(scene));
        SceneManager.LoadScene((int)scene);
        
        PhoneManager.singleTon.phoneInstagramManager.AddPost(scene);
        PhoneManager.singleTon.phoneTwitterManager.AddPost(scene);
        if ((int)scene >= 4)
        {
            PhoneManager.singleTon.PhoneMainCanvasActive(true);

        }
        else
        {
            PhoneManager.singleTon.PhoneMainCanvasActive(false);
        }
        
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

        StartLoadedGame();
    }

    public void Quit()
    {
        Application.Quit();
    }

}
