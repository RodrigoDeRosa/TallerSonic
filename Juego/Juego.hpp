#ifndef JUEGO_HPP
#define JUEGO_HPP

#include "../Graficos/Stage.hpp"
#include "../Graficos/Camara.hpp"
#include "Jugadores.hpp"
#include <iostream>
#include <string>
#include <map>
#include <vector>

/*El Juego tiene como atributos al Stage y a los Jugadores y es el responsable de relacionarlos para calcular
  colisiones entre ellos, entre otras cosas.
  Es resposabilidad del cliente verificar que al juego le lleguen tanto un stage como jugadores validos
  creados desde afuera (en este caso el jsonLoader)*/
class Juego{
    Jugadores* jugadores;
    Stage* stage;
    Camara* camara;
  public:
    Juego();
    void setJugadores(Jugadores*);
    void setStage(Stage* stage);
    bool addJugador(string , string );
    //por ahora renderiza al recibiendo una camara, luego lo hace con la camara de cada jugador
    void render();
    void setFactory();
    void setCamara(Camara* cam);

    void updateJugadores(map <string, vector <float>>);
    void updateJugador(string, float, float, float, float, float);
    ~Juego();
};

#endif /*JUEGO_HPP*/
