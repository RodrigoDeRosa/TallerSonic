#include "Camara.hpp"


const int AN_ESCENARIO = 1000;
const int AL_ESCENARIO = 1000;

camara::camara(int posX_c,int posY_c, int vel_c, int ancho_c, int alto_c){
	posX= posX_c;
	posY= posY_c;
	vel= vel_c;
	velX= 0;
	velY= 0;
	ancho= ancho_c;
	alto= alto_c;
	cam= {posX_c,posY_c,ancho_c,alto_c};
}

void camara::moveCamara(Sprite* sprite){
	
	cam.x = ( sprite->getX() + sprite->getWidth() / 2 ) - ancho / 2;
	cam.y = ( sprite->getY() + sprite->getHeight() / 2 ) - alto / 2;

	if( cam.x < 0 ){
		cam.x = 0;
	}
	if( cam.y < 0 ){
		cam.y = 0;
	}
	if( cam.x > AN_ESCENARIO - cam.w ){
		cam.x = AN_ESCENARIO - cam.w;
	}
	if( cam.y > AL_ESCENARIO -cam.h ){
		cam.y = AL_ESCENARIO - cam.h;
	}
}

SDL_Rect camara::getCamara(){
	return cam;
}

int camara::getX(){
	return posX;
}

int camara::getY(){
	return posY;
}

