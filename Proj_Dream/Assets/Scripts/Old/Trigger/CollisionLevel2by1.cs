using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionLevel2by1 : MonoBehaviour
{
    //public int index;

    public LevelManager1 levelManager1;

    public bool isPlayerOn = false;

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.transform.tag == "Player")
        {
            if (isPlayerOn == false)
            {
                isPlayerOn = true;

                levelManager1.isTouchPossible = true;
                levelManager1.GotoNextText();

            }
        }
    }


}
