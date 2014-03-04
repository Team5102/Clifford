#include "Shooter.hpp"

Shooter::Shooter():
	arm(3),
	claw(4),
	shooter(5),
	shooterEncoder(1, 2, false, k4x),
	m_stick(2), //Default port for the arm.
	shooterLimit(1)
{
	
	/*  Encoder configuration stuff */
	shooterEncoder.Reset();
	shooterEncoder.SetMaxPeriod(.1);
	shooterEncoder.SetMinRate(10);
	shooterEncoder.SetReverseDirection(false);
	shooterEncoder.SetSamplesToAverage(7);
	
	
	maxRotations = 250;
}

void Shooter::teleop()
{
	/* Driver Input (arm & claw) */ 
	arm.Set(m_stick.getLeftStickClick()); //TODO: Add deadband
	claw.Set(m_stick.getRightStickY());
	
	/* Limit Switch */
	if(shooterLimit.Get() == 1)
	{
		hasBall = true;
	}else
	{
		hasBall = false;
	}
	
	/* User Input */
	if(m_stick.getButtonA() && hasBall)
	{
		//Shoot!
		isLoaded = false;
	}
	else if(m_stick.getButtonX())
	{
		//PID loop for the pick up position
	}
	else if(m_stick.getButtonB())
	{
		//PID loop for the start position
	}

	
	/* Encoder loop (winch) */
	int count = shooterEncoder.Get();

	//Powers the shooter winch. 
	if(count < maxShooter && count > maxShooter - 15)//TODO remove second argument. Calibrate this nonsense.
	{
		shooter.Set(-.1);
	}

}
