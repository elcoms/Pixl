// Module:			Gameplay Programming
// Assignment 1:	Pixl
// Student Name:	Elcoms Khang	(S10157558A)
//					Lin Lue			(S10158175E)
//					Amos Tan		(S10158017D)

#include "Explosion.h"

// Create an Explosion object
// Child of the Entity Class
// 
Explosion::Explosion() : Entity() {

	spriteData.width = explosionNS::WIDTH;
	spriteData.height = explosionNS::HEIGHT;
	spriteData.rect.bottom = explosionNS::HEIGHT;
	spriteData.rect.right = explosionNS::WIDTH;
	spriteData.scale = explosionNS::SCALING;
	velocity.x = 0;
	velocity.y = 0;
	startFrame = explosionNS::EXPLOSION_START_FRAME;
	endFrame = explosionNS::EXPLOSION_END_FRAME;
	currentFrame = startFrame;
	radius = explosionNS::WIDTH / 2.0f;
	mass = explosionNS::MASS;
	collisionType = entityNS::CIRCLE;
	objectType = OBJECT_TYPE_EXPLOSION;
	frameDelay = 0.02f;
	health = 999;
}

bool Explosion::initialize(Game *gamePtr, int width, int height, int ncols, TextureManager *textureM) {
	return(Entity::initialize(gamePtr, width, height, ncols, textureM));
}

void Explosion::draw() {
	Image::draw();
}

void Explosion::update(float deltaTime) {
	Entity::update(deltaTime);
	if (currentFrame == endFrame) {
		setHealth(0);
	}
}