/* 
 * Generated on 1/23/14
 * By FIRST FRC Team 5102
 */
#ifndef AXIS_HPP_
#define AXIS_HPP_

#include "Servo.h"


enum AxisType
{
	up, // 0
	down, // 1
	left, 
	right
};

class Axis
{
public:
	
	Axis();
	
	Axis(std::pair<uint32_t, uint32_t>);
	
	~Axis();
	
	void up();
	
	void down();
	
	void left();
	
	void right();
	
	float get();
	
	void move(AxisType axisType, float move);
	
private:
	
	Servo x, y;

	static const uint32_t x_port = 9;
	static const uint32_t y_port = 10;
	
	static const float defMoveAngle = 15;
		
};

#endif //AXIS_HPP_
