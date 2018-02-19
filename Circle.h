// Module:			Gameplay Programming
// Assignment 1:	Pixl
// Student Name:	Elcoms Khang	(S10157558A)
//					Lin Lue			(S10158175E)
//					Amos Tan		(S10158017D)

#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "entity.h"
#include "constants.h"

// declare circle namespace
namespace CircleNS {
	const float		ACCELERATION = 1.0f;
	const float		MASS = 300.0f;
	const float		SCALING = 0.2f;
	const float		SPEED = 100;
	const float		ROTATION_RATE = (float)PI / 4;
	const int		WIDTH = 128;
	const int		HEIGHT = 128;
	const int		TEXTURE_COLS = 1;
	const int		CIRCLE_END_FRAME = 0;
	const int		CIRCLE_START_FRAME = 0;
	const int		X = GAME_WIDTH / 2 - WIDTH / 2;
	const int		Y = GAME_HEIGHT / 2 - HEIGHT / 2;
}

class Circle : public Entity {
public:

	bool isFrozen;
	float velo_x, velo_y;
	float acceleration;

	Circle();
	float getAcceleration(){ return this->acceleration; };
	void setAcceleration(float acc) { this->acceleration = acc; };
	
	virtual void draw();
	virtual bool initialize(Game *gamePtr, int width, int height, int ncols, TextureManager *textureM);
	void update(float deltaTime);
	void spawn();
	void damage(WEAPON);
	void freeze();
	void unfreeze();
};

#endif