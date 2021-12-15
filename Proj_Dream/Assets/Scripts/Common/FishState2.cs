using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Spine.Unity;

public class FishState2 : MonoBehaviour
{
    [SpineAnimation("idle")]
    public string idleAnimation;

    [SpineAnimation("move")]
    public string moveAnimation;

    SkeletonAnimation skeletonAnimation;

    public GameObject[] goTarget;
    public int currentTargetIndex;

    public float speed;

    public enum MoveState
    {
        Idle,
        Talk,
    }

    public MoveState moveState;

    // Start is called before the first frame update
    void Start()
    {
        skeletonAnimation = GetComponent<SkeletonAnimation>();
        skeletonAnimation.AnimationName = idleAnimation;
        skeletonAnimation.skeleton.ScaleX = 1f;
    }

    public void GotoNextTarget()
    {
        if (currentTargetIndex < goTarget.Length)
        {
            skeletonAnimation.skeleton.ScaleX = 1f;
            moveState = MoveState.Talk;
        }
    }

    // Update is called once per frame
    void Update()
    {
        switch (moveState)
        {
            case MoveState.Idle:
                break;

            case MoveState.Talk:
                gameObject.transform.position = Vector3.MoveTowards(
                 gameObject.transform.position, goTarget[currentTargetIndex].transform.position,
                 Time.deltaTime * speed);

                if (Vector3.Distance(gameObject.transform.position, goTarget[currentTargetIndex].transform.position) < 1f)
                {
                    skeletonAnimation.skeleton.ScaleX = -1f;
                    currentTargetIndex++;
                    moveState = MoveState.Idle;
                }
                break;

        }

        if(Input.GetKeyDown(KeyCode.Z))
        {
            GotoNextTarget();
        }
    }


}
