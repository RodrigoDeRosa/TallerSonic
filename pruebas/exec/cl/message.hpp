#ifndef MESSAGE_HPP
#define MESSAGE_HPP

//KEY_TOTAL se devuelve en caso que la cola este vacia
enum key_event {PING, LEFT_UP, LEFT_DOWN, RIGHT_UP, RIGHT_DOWN, SPACE_UP, SPACE_DOWN, QUIT, KEY_TOTAL};
enum move_type {IDLE_D, IDLE_I, JUMP_D, JUMP_I, RUN_D, RUN_I, WALK_D, WALK_D, MOVE_TOTAL};

typedef struct out_message{
	char ping; //En 1 indica que el mensaje es un ping del servidor
	int id;
	bool connection;
	float posX;
	float posY;
	float camPos;
	move_type move;
	int frame;
} out_message_t;

typedef struct in_message{
    int id;
    key_event key;
} in_message_t;

#endif /*MESSAGE_HPP*/
