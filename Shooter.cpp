#include "Shooter.hpp"

Shooter::Shooter():
	arm(8),
	claw(7),
	shooter(5),
	shooterEncoder(1, 2, false),
	m_stick(2), //Default port for the arm.
	//clawPiston(8,7),
	clawPiston(8),
	clawPiston2(7),
	shooterLimit(1)
{
	
	/*  Encoder configuration stuff */
	shooterEncoder.Reset();
	shooterEncoder.SetMaxPeriod(.1);
	shooterEncoder.SetMinRate(10);
	shooterEncoder.SetReverseDirection(false);
	shooterEncoder.SetSamplesToAverage(7);
	
	clawPiston.Set(DoubleSolenoid::kOff);
	
	maxRotations = 250;
}

void Shooter::teleop()
{
	/* Driver Input (arm & claw) */ 
	arm.Set(m_stick.getLeftStickY()); //TODO: Add deadband
	

	claw.Set(m_stick.getRightStickY());
	
	
	/* Limit Switch */
	if(shooterLimit.Get() == 1)
	{
		hasBall = true;
	}else
	{
		hasBall = false;
	}
	
	/* User Input 
 	if(m_stick.getButtonA() && hasBall)
	{
		//Shoot!
		isLoaded = false;
	} */
	if(m_stick.getButtonA())
	{
		clawPiston.Set(true);
		clawPiston2.Set(false);
	}
	else if(m_stick.getButtonX())
	{
		//PID loop for the pick up position
	}
	else if(m_stick.getButtonB())
	{
		//PID loop for the start position
	}
	else if(m_stick.getButtonY())
	{
		clawPiston.Set(false);
		clawPiston2.Set(true);
	}
	else if(m_stick.getButtonSelect())
	{
		//Pass
	}
	
 	
	/* Encoder loop (winch) */
	int count = shooterEncoder.Get();

	//Powers the shooter winch. 
	if(count < maxRotations && count > maxRotations - 15)//TODO remove second argument. Calibrate this nonsense.
	{
		shooter.Set(-.1);
	}

}
