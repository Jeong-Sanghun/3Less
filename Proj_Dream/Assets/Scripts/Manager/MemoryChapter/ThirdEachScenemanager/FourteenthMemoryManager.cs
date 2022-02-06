using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FourteenthMemoryManager : PhoneDialogManager
{
    // Start is called before the first frame update
    protected override void Start()
    {
        base.Start();
        dialogBundle = jsonManager.ResourceDataLoad<DialogBundle>("ThirdChapter3");
        dialogBundle.SetCharacterEnum();

        nowScene = SceneName.MemoryFriendRoom1;
        StartCoroutine(InvokerCoroutine(1f, NextDialog));
    }


}
