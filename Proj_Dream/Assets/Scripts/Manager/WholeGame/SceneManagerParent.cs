using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneManagerParent : MonoBehaviour
{
    protected string triggerName;
    protected bool isTrigger;

    public virtual void IsTriggered(string name)
    {
        triggerName = name;
        isTrigger = true;
    }
}
