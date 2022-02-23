using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EndContentsManager : MonoBehaviour
{
    [SerializeField]
    ModuleManager moduleManager;
    [SerializeField]
    PlayController player;
    [SerializeField]
    GameObject cam;
    [SerializeField]
    Image fadeImage;
    
    bool cameraFollowing;
    float cameraRightBound;
    // Start is called before the first frame update
    void Start()
    {
        cameraRightBound = 67.8f;
        player.isPlayPossible = true;
        PhoneManager.singleTon.PhoneMainCanvasActive(true);
        StartCoroutine(moduleManager.FadeModule_Image(fadeImage, 1, 0, 1));
        StartCoroutine(CameraFollowCoroutine());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    protected IEnumerator CameraFollowCoroutine()
    {
        Transform playerTransform = player.transform;
        Vector3 delta = cam.transform.position - playerTransform.position;
        float originY = cam.transform.position.y;
        cameraFollowing = true;
        while (cameraFollowing == true)
        {
            yield return new WaitForFixedUpdate();
            Vector3 pos = new Vector3((playerTransform.position + delta).x, originY, -10);
            if (pos.x >= 0.71 && pos.x <= cameraRightBound)
            {
                cam.transform.position = pos;
            }


        }
    }

}
