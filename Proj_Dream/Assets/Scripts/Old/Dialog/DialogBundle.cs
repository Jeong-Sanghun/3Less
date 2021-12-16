using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class DialogBundle
{
    public string bundleName;
    public List<Dialog> dialogList;

    public DialogBundle()
    {
        dialogList = new List<Dialog>();
    }
}
