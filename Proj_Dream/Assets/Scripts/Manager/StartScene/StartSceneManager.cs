using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartSceneManager : MonoBehaviour
{
    GameManager gameManager;
    // Start is called before the first frame update
    void Start()
    {
        gameManager = GameManager.singleTon;
        
    }

    public void StartNewButton()
    {
        gameManager.saveData = new SaveDataClass();
        gameManager.SaveSaveData();
        gameManager.LoadScene(SceneName.Bright);

    }

    public void StartLoadButton()
    {
        gameManager.StartLoadedGame();
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
