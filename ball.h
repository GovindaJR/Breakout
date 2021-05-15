/*
file: ball.h
lab: 11
by: Govinda Ramrattan
org: COP 2001, 202101, 10409
desc: declaration of a ball class object
-----------------------------------------------------------*/
#ifndef BALL_H
#define BALL _H

#include "fgcugl.h"		// OpenGL library
#include "block.h"		// quad block object

class Ball {
public:
	// global define
	enum CollisionType {
		None,
		Vertical,
		Horizontal
	};


	// constructors
	Ball(float x, float y, float velocityX, float velocityY, int size, fgcugl::Color color = fgcugl::Blue);

	// accessors

	// getters
	float getXCoordinate();
	float getYCoordinate();
	float getXVelocity();
	float getYVelocity();
	int getSize();
	fgcugl::Color getColor();

	// setters
	void setXCoordinate(float value);
	void setYCoordinate(float value);
	void setXVelocity(float value);
	void setYVelocity(float value);
	void setSize(int value);
	void setColor(fgcugl::Color value);

	// member methods
	int top();
	int bottom();
	int left();
	int right();

	void update(float lag);
	void draw(float lag);

	CollisionType collisionCheck(Block block);
	void doCollision(int collisions);

private: 

	float xpos;
	float ypos;
	float velocityX;
	float velocityY;
	int radius;
	fgcugl::Color color;

};



#endif // BALL_H