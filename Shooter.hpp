#include "WPILib.h"
#include "util/Xbox.hpp"

class Shooter
{
	
public:
	
	Shooter();

	//Called Repeatedly during OperatorControle
	void teleop();
	
private:

	int maxRotations;
	
	Talon arm, claw, shooter;
	
	Encoder shooterEncoder;
	
	Xbox m_stick;
	
	Timer reload;
	
	DigitalInput shooterLimit;
	
	bool hasBall, isLoaded;
	
};
