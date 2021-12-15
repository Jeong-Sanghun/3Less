using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level1TriggerSound : MonoBehaviour
{
    public bool isTriggerOn;
    public SoundManager soundManager;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        Debug.Log(collision.transform.gameObject.name);

        if (collision.transform.tag == "Player" && isTriggerOn == false)
        {
            Debug.Log("Trigger 1 On.");
            isTriggerOn = true;
            soundManager.ChangeVolume();
        }
    }
}
