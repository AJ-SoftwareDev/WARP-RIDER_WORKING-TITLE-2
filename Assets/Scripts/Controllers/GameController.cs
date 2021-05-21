using UnityEngine;

public class GameController : MonoBehaviour
{
    #region VARS
    private int _credits;
    private bool _gameOver;
    //private Player _player;
    private UIManager _UI;
    #endregion

    void Start()
    {
        //_gameOver = false;
        _credits = 3;
        //_player = GameObject.Find("Player").GetComponent<Player>(); // Should not be using this method of grabbing reference but does trick for testing!!
        _UI = GameObject.Find("UIPanel").GetComponent<UIManager>();
    }

    private void Update()
    {
        //if (_player.dead == true)
        //{
        //    if (_credits > 0)
        //    {
        //        _credits -= 1;
        //        _player.Respawn();
        //        Debug.Log("Remaining credits: " + _credits);
        //    }
        //    else
        //    {
        //        _UI._gameOverScreen.SetActive(true);
        //        _UI._gameplayScreen.SetActive(false);
        //    }
        //}
        //else
        //{
        //    _UI._gameplayScreen.SetActive(true);
        //    _UI._gameOverScreen.SetActive(false);
        //}

        //if (_credits <= 0)
        //{
        //    _player.transform.position = Vector3.zero;
        //    _player.dead = true;
        //    // Game over:            
        //    // If no highscore, pop up Y/N buttons for restarting or exiting. Reset lives to three and restart game if Y, pop up main screen if N.
        //    // If highscore, pop up TextEntry field allowing player to enter name and capture score. Pop up main screen afterwards.
        //}
    }
}
