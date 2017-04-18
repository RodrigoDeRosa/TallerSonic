#include "Juego.hpp"
#include "Logger2.hpp"

Juego::Juego(){
    jugadores = NULL;
    stage = NULL;
    camara = NULL;
}

void Juego::setStage(Stage* new_stage){
    stage = new_stage;
}

// void Juego::actualizarJugadores(){
//     //tendria que recibir datos del servidor para actualizar la posicion de todos los jugadores
// }

void Juego::render(){
    //this.actualizarJugadores();
    stage->render(camara);
    camara->render();
    jugadores->render(camara);
}

void Juego::addJugador(string nombreJugador, string nombrePersonaje){
    jugadores->addJugador(nombreJugador,nombrePersonaje);
}


void Juego::setCamara(Camara* cam){
    camara = cam;
}

Juego::~Juego(){
    if (jugadores){
        delete jugadores;
        jugadores = NULL;
    }
    if (stage){
        delete stage;
        stage = NULL;
    }
}
