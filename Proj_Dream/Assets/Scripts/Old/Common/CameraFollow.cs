using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    public GameObject target;

    public float speed;

    public float distance;

    public Vector3 cameraPosDefault;
    public Vector3 cameraPosZoom;
    public float pozSpeed;

    public bool isZoomEnd;

    public Camera myCam;

    public float zoomMin;
    public float zoomMax;
    public float zoomSpeed;

    public bool isFollowing;

    public bool isScene1;

    public float maxPoz;
         

    // Start is called before the first frame update
    void Start()
    {
        if(isScene1)
        {
            isFollowing = false;
            myCam.transform.position = cameraPosZoom;
            myCam.orthographicSize = zoomMin;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (isScene1 && isZoomEnd)
        {
            myCam.transform.position = Vector3.Lerp(
                myCam.transform.position, cameraPosDefault, Time.deltaTime * pozSpeed);

            myCam.orthographicSize = Mathf.Lerp(myCam.orthographicSize,
                zoomMax, Time.deltaTime * zoomSpeed);
        }

        if (isFollowing)
        {
            if (target.transform.position.x > 0f && target.transform.position.x < maxPoz )
            {
                if (Vector3.Distance(gameObject.transform.position, target.transform.position) > distance)
                {
                    //gameObject.transform.position = Vector3.MoveTowards(gameObject.transform.position,
                    gameObject.transform.position = Vector3.Lerp(gameObject.transform.position,
                       new Vector3(target.transform.position.x, 0f, -10f), Time.time * speed);
                }
            }
            else
            {
                if(isScene1)
                {
                    gameObject.transform.position = new Vector3(maxPoz, gameObject.transform.position.y, gameObject.transform.position.z);
                }
            }
        }
    }
}
