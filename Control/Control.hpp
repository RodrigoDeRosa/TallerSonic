#include <SDL2/SDL.h>
#include <vector>
#include "CameraControl.hpp"

using namespace std;

class Control{
	Model* model;
	CameraControl* cameraControl;
	void setCameraPosition(float cameraPosition);
	public:
		Control();
		vector<float> getDirections(SDL_Event e, float dirX, float dirY);
		vector<float> handleEvent(string playerName,SDL_Event e,float dirX, float dirY);
		void addPlayer(string playerName);
		bool moveCamera(float newPlayerX);
		bool moveCameraAndPlayer(string playerName, vector<float> directions);
		float getDisconnectedPlayersNewPosition(float dirX);
		float getCameraPosition();
};
