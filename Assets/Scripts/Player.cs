using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class Player : NetworkBehaviour
{
    [SerializeField]
    private TextMesh _playerNameText;
    [SerializeField]
    private GameObject _floatingInfoGO;

    private Material _materialClone;

    [SerializeField]
    private SceneManager _sm;


    [SyncVar(hook = nameof(OnNameChanged))]
    private string _playerName;

    [SyncVar(hook =nameof(OnColorChanged))]
    private Color _playerColor = Color.white;

    void OnNameChanged(string old, string _new)
    {
        _playerNameText.text = _playerName;
    }

    void OnColorChanged(Color old, Color _new)
    {
        _playerNameText.color = _new;
        _materialClone = new Material(GetComponent<Renderer>().material);
        _materialClone.color = _new;
        GetComponent<Renderer>().material = _materialClone;
    }

    public override void OnStartLocalPlayer()
    {
        Camera.main.transform.SetParent(this.transform);
        Camera.main.transform.localPosition = Vector3.zero;

        _floatingInfoGO.transform.localPosition = new Vector3(0, -0.3f, 0.6f);
        _floatingInfoGO.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);

        var name = "Player" + Random.Range(100, 999);
        var color = Random.ColorHSV();
        CmdSetupPlayer(name, color);
    }

    [Command]
    void CmdSetupPlayer(string _name, Color _col)
    {
        _playerName = _name;
        _playerColor = _col;
    }

    private void Update()
    {
        if (!isLocalPlayer)
        {
            _floatingInfoGO.transform.LookAt(Camera.main.transform);
            return;
        }
            
           

        float moveX = Input.GetAxis("Horizontal");
        float moveZ = Input.GetAxis("Vertical");

        transform.Rotate(0, moveX * Time.deltaTime * 110f, 0);
        transform.Translate(Vector3.forward * moveZ * Time.deltaTime * 4f);

    }
}
