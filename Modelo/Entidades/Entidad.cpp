#include "Entidad.hpp"

Entidad::Entidad(int id,float x, float y, float w, float h){
	this->id = id;
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
	this->destruida = false;
}

int Entidad::getId(){
	return this->id;
}


float Entidad::getX(){
	return this->x;
}

float Entidad::getY(){
	return this->y;
}

void Entidad::setW(float x){
	this->w = w;
}

void Entidad::setH(float x){
	this->h = w;
}

float Entidad::getCentroX(){

	return this->getX() + (this->w / 2);
}

float Entidad::getCentroY(){

	return this->getY() + (this->h / 2);
}

float Entidad::getBordeDer(){

	return this->getX() + (this->w);
}

float Entidad::getBordeIzq(){

	return this->getX();
}

float Entidad::getBordeArriba(){

	return this->getY();
}

float Entidad::getBordeAbajo(){

	return this->getY() + (this->h);
}

bool Entidad::estaDestruida(){
	return this->destruida;
}

out_message_t* Entidad::getOutMessage(message_type type){
	out_message_t* state = new out_message_t;
	state->ping = type;
	state->id = this->id;
	state->connection = !(this->destruida);
	state->posX = this->x;
	state->posY = this->y;
	state->camPos = 0; //seteo en cero porque no tiene sentido para la entidad
	state->move = MOVE_TOTAL; //tampoco tiene sentido para la entidad
	state->frame = 0;
	return state;
}

void Entidad::mover(){}