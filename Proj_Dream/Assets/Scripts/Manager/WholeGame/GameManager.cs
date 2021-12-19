using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public enum SceneName
{
    MainMenu,Bright,Dark,Memory
}

public class GameManager : MonoBehaviour
{

    public static GameManager singleTon;
    public SaveDataClass saveData;
    JsonManager jsonManager;
    
    SceneName nowScene;
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


    // Update is called once per frame
    void Update()
    {
        
    }
}
