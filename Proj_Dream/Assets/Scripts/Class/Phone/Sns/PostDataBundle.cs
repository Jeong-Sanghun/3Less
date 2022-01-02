using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class PostDataBundle
{
    public List<OnePost> postList;

    public PostDataBundle()
    {
        postList = new List<OnePost>();
    }
}
