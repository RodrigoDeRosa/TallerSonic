#include "Escudo.hpp"

#define WIDTH 1553
#define HEIGHT 363
#define W 171
#define H 181.5

Escudo::Escudo(float x, float y) : Entity(x, y, WIDTH, HEIGHT){
    setClip("move");
    setRectangulo("move", 0, 0, W + 4, H);
    setRectangulo("move", 174, 0, W+1.5, H);
    setRectangulo("move", 246.5, 0, W, H);
    setRectangulo("move", 517.5, 0, W, H);
    setRectangulo("move", 688.5, 0, W, H);
    setRectangulo("move", 859.5, 0, W, H);
    setRectangulo("move", 1030.5, 0, W, H);
    setRectangulo("move", 1201.5, 0, W, H);
    setRectangulo("move", 1372.5, 0, W+1.5, H);
    rectangle = clipsMovimientos->getRectangulo("move", 0);
}
