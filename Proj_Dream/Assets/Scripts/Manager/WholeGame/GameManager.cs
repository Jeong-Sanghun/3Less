using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public enum SceneName
{
    MainMenu,Bright,Dark,MemoryHome1,MemoryRestaurant,MemoryStreet1,MemoryRooftop1,MemorySchool1,MemoryHome2
}

public class GameManager : MonoBehaviour
{

    public static GameManager singleTon;
    [HideInInspector]
    public SaveDataClass saveData;

    JsonManager jsonManager;
    
    SceneName nowScene;
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
        LoadSaveData();

    }

    public void LoadScene(SceneName scene)
    {
        //StartCoroutine(SceneLoadCoroutine(scene));
        SceneManager.LoadScene((int)scene);
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
    }

    public void SaveSaveData()
    {
        jsonManager.SaveJson(saveData);
    }

    public void StartLoadedGame()
    {
        isNewGame = false;
        LoadScene(saveData.savedScene);
    }

    public void GameOver()
    {

        StartLoadedGame();

    }

}
