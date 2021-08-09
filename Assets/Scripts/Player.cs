using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class Player : NetworkBehaviour
{
    [SyncVar(hook = "OnChangeSpeed")]
    private float _speed;
    [SerializeField]
    private GameObject _cap;

    [SyncVar(hook = "OnWearHat")]
    private bool _wearingHat = false;

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

        var move = new Vector3(0, 0, v);
        var look = new Vector3(0, h, 0);

        transform.Rotate(look);
        transform.Translate(move * _speed * Time.deltaTime);

        if (Input.GetKeyDown(KeyCode.Space))
            CmdWearHat();

    }

    /// <summary>
    /// This will run on the server
    /// </summary>
    [Command]
    void CmdInitPlayer()
    {
        _speed = 5.0f;

    }

    [Command]
    void CmdWearHat()
    {
        Debug.Log("Code to verify equipment of hat");
        _wearingHat = !_wearingHat;

    }

    void OnWearHat(bool _old, bool _new)
    {
        _cap.GetComponent<Renderer>().enabled = _new;
    }

    /// <summary>
    /// This is a callback function that the client calls when the variable from the server has been synced. 
    /// This is used for presentation update on the client who executed the server command and will allow all other clients
    /// to see those changes. Ie. Equopping armor will display for everyone :)
    /// </summary>
    void OnChangeSpeed(float _old, float _new)
    {
        Debug.Log("OnChangeSpeed::_old: " + _old);
        Debug.Log("OnChangeSpeed::_new: " + _new);
        Debug.Log("Just got word from the server that my speed is now:" + _speed);
    }




}
