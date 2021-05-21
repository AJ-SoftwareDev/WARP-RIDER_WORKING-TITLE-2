using UnityEngine;

public class Player : MonoBehaviour
{
    #region VARS
    private Vector3 _startPos;
    [HideInInspector] public bool dead;
    #endregion

    void Start()
    {
        this.dead = false;
        this._startPos = Vector3.zero;
    }

    #region CUSTOM_FUNCTIONS
    public void Die()
    {
        this.dead = true;
        //Debug.Log("Player dead?" + dead);
    }

    public void Respawn()
    {
        this.dead = false;
        this.transform.position = _startPos;
        //Debug.Log("Player dead?" + dead);
    }
    #endregion

    private void Update()
    {
        if (this.dead == false)
        {
            transform.Translate(1.5f * Time.deltaTime, 0, 0); // Test collisions are working when player obj is moving.
        }                       
    }
}