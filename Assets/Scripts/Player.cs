using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class Player : NetworkBehaviour
{
    [SyncVar(hook = "OnChangeSpeed")]
    private float _speed;

    /// <summary>
    /// Called by server when we connect
    /// </summary>
    public override void OnStartLocalPlayer()
    {
        base.OnStartLocalPlayer();

        Debug.Log("I'm connected!");

        Debug.Log("My speed on the client: " + _speed);

        CmdInitPlayer();

        
    
    }

    private void Update()
    {
        if (!isLocalPlayer)
            return;

        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        var move = new Vector3(h, 0, v);

        transform.Translate(move * _speed * Time.deltaTime);
    }

    /// <summary>
    /// This will run on the server
    /// </summary>
    [Command]
    void CmdInitPlayer()
    {
        _speed = 5.0f;
    }

    /// <summary>
    /// The server will update the speed and then the client will call this message.
    /// </summary>
    void OnChangeSpeed(float _old, float _new)
    {
        Debug.Log("OnChangeSpeed::_old: " + _old);
        Debug.Log("OnChangeSpeed::_new: " + _new);
        Debug.Log("Just got word from the server that my speed is now:" + _speed);
    }




}
