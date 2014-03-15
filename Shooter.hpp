#include "WPILib.h"
#include "util/Xbox.hpp"

class Shooter
{
	
public:
	
	Shooter();

	//Called Repeatedly during OperatorControle
	void teleop();
	
	Talon arm, claw, shooter;
	
private:

	int maxRotations;

	Encoder shooterEncoder;
	
	Xbox m_stick;
	
	Timer reload;
	
	//DoubleSolenoid clawPiston;
		
	Solenoid clawPiston, clawPiston2;
	
	DigitalInput shooterLimit;
	
	bool hasBall, isLoaded;
	
};
