#include "WPILib.h"

#include "util/Xbox.hpp"
#include "util/DriverStation.hpp"

class Shooter
{
	
public:
	
	Shooter();

	//Called Repeatedly during OperatorControle
	void teleop();
	
	Talon arm, claw, shooter;
	
	Xbox m_stick;
	
private:

	int maxRotations;
	
	bool derp;
	//Encoder shooterEncoder;
	
	//AnalogChannel armPot;
	
	Timer reload;
	
	DoubleSolenoid clawPiston;
	
	Solenoid shooterSol;
	
	//LimitSwitch
	DigitalInput shooterLimit;
	
	bool hasBall, isLoaded, isArmed;
	
};
