using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pause_game : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        bool pause = false; // pausa por default está apagada

        if (Input.GetKeyDown(KeyCode.Escape) & pause == false) // si el usuario presiona esc y no hay pausa
        {
            pause = true; // el juego está pausado y el tiempo se detiene dentro del juego
            Time.timeScale = 0; // detener el tiempo
        }
        
        else if (Input.GetKeyDown(KeyCode.Escape) & pause == true) // si presionas esc y la pausa está activada
        {
            pause = false; // regresar pausa a falso
            Time.timeScale = 1; // regresar el tiempo a la normalidad
        }
 
	}
  
}
