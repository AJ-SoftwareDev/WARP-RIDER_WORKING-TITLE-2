using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UIManager : MonoBehaviour
{
    public GameObject mainMenuScr;
    public GameObject aboutScr;
    [Space(20)]
    public Button audioBtn;
    public AudioSource aSrc;
    public Button aboutBtn;
    public Button backBtn;
    [Space(20)]    
    public List<GameObject> titles;
    public TextMeshProUGUI descriptionObject;    


    private void Awake()
    {
        mainMenuScr = this.transform.Find("MainMenu").gameObject;
        aboutScr = this.transform.Find("AboutMenu").gameObject;
        titles = new List<GameObject>();
    }

    private void Start()
    {
        foreach(GameObject t in GameObject.FindGameObjectsWithTag("Title"))
        {
            titles.Add(t);
        }

        // Still need start game button functionality and listener.
        audioBtn = GameObject.Find("AudioBtn").GetComponent<Button>();
        aboutBtn = GameObject.Find("AboutBtn").GetComponent<Button>();
        backBtn = GameObject.Find("BackBtn").GetComponent<Button>();

        audioBtn.onClick.AddListener(delegate { ButtonHandler(audioBtn); });
        aSrc = GameObject.Find("AudioSrc").GetComponent<AudioSource>();
        aboutBtn.onClick.AddListener(delegate { ButtonHandler(aboutBtn); });
        backBtn.onClick.AddListener(delegate { ButtonHandler(backBtn); });

        descriptionObject = GameObject.Find("Description").GetComponent<TextMeshProUGUI>();
        mainMenuScr.SetActive(true);
        aboutScr.SetActive(false);
        backBtn.gameObject.SetActive(false);
        Screen.orientation = ScreenOrientation.AutoRotation;
    }

    private void Update()
    {
        if (Screen.orientation == ScreenOrientation.LandscapeLeft || Screen.orientation == ScreenOrientation.LandscapeRight)
        {
            foreach(GameObject t in titles)
            {
                if (t.activeInHierarchy == true)
                {
                    t.GetComponent<TextMeshProUGUI>().fontSize = 200;
                }
            }

            // Reposition audio + about buttons to take advantage of extra horizontal space.
            
            //descriptionObject.fontSize = 16; // Not gonna want to be setting this every time the screen rotates as might not be in about screen when control statement triggers.
        }
        else
        {
            foreach (GameObject t in titles)
            {
                if (t.activeInHierarchy == true)
                {
                    t.GetComponent<TextMeshProUGUI>().fontSize = 100;
                }
            }

            
            //descriptionObject.fontSize = 22; // Not gonna want to be setting this every time the screen rotates as might not be in about screen when control statement triggers.
        }
    }

    public void ButtonHandler(Button pressed)
    {
        if (pressed == audioBtn)
        {
            if (AudioListener.volume > 0f)
            {
                AudioListener.volume = 0f;
                //aSrc.mute = true; // Issue with boolean in Unity's inspector so not using this right now.
            }
            else
            {
                AudioListener.volume = 1f;
                //aSrc.mute = false; // Issue with boolean in Unity's inspector so not using this right now.
            }

        }
        else if (pressed == aboutBtn)
        {
            // Pause gameplay.
            aboutScr.SetActive(true);
        }
    }
}
