using UnityEngine;

public class Dangerous : Obstacles
{
    #region VARS
    private enum Type { DEBRIS, BLAZING_METEOR }
    [SerializeField] private Type _type;

    [SerializeField] private Player _player;
    #endregion

    private void Start()
    {
        if (this.name == "Debris")
        {
            this._type = Type.DEBRIS;
        }
        else if (this.name == "BlazingMeteor")
        {
            this._type = Type.BLAZING_METEOR;
        }
        
        _player = GameObject.Find("Player").GetComponent<Player>(); // Should not be using this method of grabbing reference but does trick for testing!!
    }

    #region CUSTOM_FUNCTIONS
    public override void Interaction()
    {
        base.Interaction();

        switch (_type)
        {
            case Type.DEBRIS:
                _player.Die();
                break;
            case Type.BLAZING_METEOR:
                _player.Die();
                break;
        }
    }
    #endregion

    private void OnCollisionEnter(Collision collision)
    {
        Interaction();
    }
}