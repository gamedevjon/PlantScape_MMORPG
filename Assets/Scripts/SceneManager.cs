using System.Collections;
using System.Collections.Generic;
using Mirror;
using UnityEngine;
using UnityEngine.UI;

public class SceneManager : NetworkBehaviour
{
    [SerializeField]
    private Text _statusText;

    [SerializeField]
    private Player _player;
}
