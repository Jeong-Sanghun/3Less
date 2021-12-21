using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GaugeManager : MonoBehaviour
{

    public int nowHealthGauge;
    public int nowMoneyGauge;
    [SerializeField]
    Image moneyImage;
    [SerializeField]
    Image healthImage;

    Sprite[] moneySpriteArray;
    Sprite[] healthSpriteArray;
    public bool isGameOver = false;
    

    

    // Start is called before the first frame update
    void Awake()
    {
        moneySpriteArray = Resources.LoadAll<Sprite>("Image/Money");
        healthSpriteArray = Resources.LoadAll<Sprite>("Image/Health");

    }

    public void SetGauge(int money, int health)
    {
        nowHealthGauge = health;
        nowMoneyGauge = money;
        moneyImage.sprite = moneySpriteArray[money];
        healthImage.sprite = healthSpriteArray[health];
    }

    public void ChangeMoneyGauge(int number)
    {
        StartCoroutine(GaugeImageChangeCoroutine(true, number));
    }

    public void ChangeHealthGauge(int number)
    {
        StartCoroutine(GaugeImageChangeCoroutine(false, number));
    }

    IEnumerator GaugeImageChangeCoroutine(bool isMoney,int number)
    {
        Image nowImage;
        Sprite[] nowSpriteArray;
        int lastGaugeNumber;
        int afterGaugeNumber;
        if (isMoney)
        {
            nowImage = moneyImage;
            lastGaugeNumber = nowMoneyGauge;
            nowMoneyGauge += number;
            afterGaugeNumber = nowMoneyGauge;
            nowSpriteArray = moneySpriteArray;
        }
        else
        {
            nowImage = healthImage;
            lastGaugeNumber = nowHealthGauge;
            nowHealthGauge += number;
            afterGaugeNumber = nowHealthGauge;
            nowSpriteArray = healthSpriteArray;
        }
        int changingNumber = number;
        if (afterGaugeNumber <0)
        {
            changingNumber = -lastGaugeNumber;
        }
        else if(afterGaugeNumber >= nowSpriteArray.Length)
        {
            changingNumber = nowSpriteArray.Length - lastGaugeNumber;
        }

        if(changingNumber != 0)
        {
            int absNumber = Mathf.Abs(changingNumber);
            int one = absNumber / changingNumber;

            for (int i = 0; i < absNumber; i++)
            {
                Debug.Log(1.0f / (float)absNumber);
                yield return new WaitForSeconds(1.0f / (float)absNumber);
                
                lastGaugeNumber += one;
                nowImage.sprite = nowSpriteArray[lastGaugeNumber];
            }
        }
        
        if(afterGaugeNumber < 0)
        {
            isGameOver = true;
            GameManager.singleTon.GameOver();
        }

    }

}
