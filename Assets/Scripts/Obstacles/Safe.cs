using UnityEngine;

public class Safe : Obstacles
{
    private enum ObstacleType { SHOOTINGSTAR, SHIMMERINGSTAR, HALODSTAR, VALUABLEMETORITE }
    [SerializeField]
    private ObstacleType _type;
    public override void Interaction()
    {
        //what type object are we interacting with
        switch (_type)
        {
            case ObstacleType.SHOOTINGSTAR:
                //speed boost for a duration of 3 seconds
                //
                //call function in player called speed boost
                break;
            case ObstacleType.SHIMMERINGSTAR:
                //invicibilty for a duration of 3 seconds
                //
                //call function in player called invicibilty
                break;
            case ObstacleType.HALODSTAR:
                //double points 1 minute duration
                //call function in player called double points
                break;
            case ObstacleType.VALUABLEMETORITE:
                //points boost extra points based on multiplier.
                //
                //add points in highscore.
                break;
            default:
                break;
        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        //call interaction
        Interaction();
    }
}
