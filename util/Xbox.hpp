/* 
 * Generated on 1/21/14
 * By FIRST FRC Team 5102
 */

//Class to create more intuitive 
#ifndef XBOX_HPP_
#define XBOX_HPP_


#include "WPILib.h"
//#include "../Joystick.h"

class Xbox
{
	
public:
	
	Xbox();
	
	Xbox(uint32_t port);
	
	~Xbox();
	
	/*	Axes */
	float getLeftStickX();
	
	float getLeftStickY();
	
	float getRightStickX();
	
	float getRightStickY();

	/*	Buttons */
	
	bool A(); bool getButtonA();
	bool B(); bool getButtonB();
	bool X(); bool getButtonX();
	bool Y(); bool getButtonY();
	
	bool Start(); bool getButtonStart();
	bool Select(); bool getButtonSelect();
		
	//Bumpers
	bool RB(); bool getRightBumper();
	bool LB(); bool getLeftBumper();
	
	//Triggers
	bool RT();  bool getRightTrigger();
	bool LT();  bool getLeftTrigger();
	
	//Joystick clicks
	bool getLeftStickClick(); bool LS();
	bool getRightStickClick(); bool RS();
	
	bool getButtonLeft(); bool DL();
	bool getButtonRight(); bool DR();
	bool getButtonUp(); bool DU();
	bool getButtonDown(); bool DD();
	
private:
	
	//This is the default port for the Xbox controller
	static const uint32_t defaultPort = 1;
	
	Joystick xbox;
};

#endif //XBOX_HPP_
