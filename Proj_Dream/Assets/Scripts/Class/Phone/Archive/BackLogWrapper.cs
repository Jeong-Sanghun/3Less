using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class BackLogWrapper
{
    public SceneName sceneName;
    public List<OneBackLog> backLogList;

    [System.NonSerialized]
    public List<BackLogDialogPair> backLogDialogPairList;

    public BackLogWrapper()
    {
        backLogDialogPairList = new List<BackLogDialogPair>();
    }

    public void SetBackLogPair(SceneName scene, string fileName)
    {
        JsonManager json = new JsonManager();
        DialogBundle bundle = json.ResourceDataLoad<DialogBundle>(fileName);
        BackLogDialogPair pair = new BackLogDialogPair(scene,bundle);
        backLogDialogPairList.Add(pair);

    }
}
