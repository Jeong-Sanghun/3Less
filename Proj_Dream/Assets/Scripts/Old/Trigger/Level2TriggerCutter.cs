using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level2TriggerCutter : MonoBehaviour
{
    public LevelManager2 levelManager;
    public Rigidbody2D rigid;

    public GameObject goCutter;

    public GameObject goCutterAnim;

    private bool isCheck;
    public GameObject goCutterButton;

    // Start is called before the first frame update
    void Start()
    {
        isCheck = false;
        goCutterAnim.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "cutter")
        {
            if(isCheck == false)
            {
                isCheck = true;

                goCutterAnim.SetActive(true);

                StartCoroutine(ProcessEnding2());
            }
        }
    }

    IEnumerator ProcessEnding2()
    {
        goCutterButton.SetActive(false);

        yield return new WaitForSeconds(1f);

        Debug.Log("End NExt Scene");
        rigid.gravityScale = 0.1f;
        goCutter.SetActive(false);
        levelManager.StartFadeOut();

        yield return new WaitForSeconds(8f);

        UnityEngine.SceneManagement.SceneManager.LoadScene(3);
    }

    //void NextLevel()
    //{
        
    //}
}
