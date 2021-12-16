using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level1Trigger1 : MonoBehaviour
{

    public bool isTriggerOn;
    public LevelManager1 levelManager1;

    // Start is called before the first frame update
    void Start()
    {
        isTriggerOn = false;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        Debug.Log(collision.transform.gameObject.name);

        if (collision.transform.tag == "Player" && isTriggerOn == false)
        {
            Debug.Log("Trigger 1 On.");
            isTriggerOn = true;
            levelManager1.StartTrigger1();
        }
    }
}
