#include "Shooter.hpp"

Shooter::Shooter():
	arm(8),
	claw(7),
	shooter(5),
	//shooterEncoder(1, 2, false),
	m_stick(2), //Default port for the arm.
	clawPiston(7, 8),
	shooterSol(3),
	shooterLimit(4) // Keep four reserved for this one.
{
	
	/*  Encoder configuration stuff 
	shooterEncoder.Reset();
	shooterEncoder.SetMaxPeriod(.1);
	shooterEncoder.SetMinRate(10);
	shooterEncoder.SetReverseDirection(false);
	shooterEncoder.SetSamplesToAverage(7);
	*/
	clawPiston.Set(DoubleSolenoid::kReverse);
	shooterSol.Set(false);
	
	//Important to set this.
	isLoaded = false;
	
	//As is this.
	isArmed = false;
	
	maxRotations = 250;
}

void Shooter::teleop()
{
	/* Driver Input (arm & claw) */ 
	arm.Set(m_stick.getLeftStickY()); //TODO: Add deadband
	claw.Set(-m_stick.getRightStickY());
	
	//Check the limit switch
	if(shooterLimit.Get() == 0)
	{
		isLoaded = true;
	}
	
	//Run shooter in reverse until the limit switch is tripped
	//We check the limit switch value before we power the motor
	if(!isLoaded && isArmed)
	{
		shooter.Set(-0.6);
	}else
	{
		shooter.Set(0);
	}
	
	/* Limit Switch 
	if(shooterLimit.Get() == 1)
	{
		hasBall = true;
	}else
	{
		hasBall = false;
	}
	*/
	
	/* User Input 
 	if(m_stick.getButtonA() && hasBall)
	{
		//Shoot!
		isLoaded = false;
	} */
	
	if(m_stick.getButtonA())
	{
		clawPiston.Set(DoubleSolenoid::kForward);
	}
	else if(m_stick.getButtonX())
	{
		//PID loop for the pick up position
	}
	else if(m_stick.getButtonB())
	{
		isArmed = false;
		//PID loop for the start position
	}
	else if(m_stick.getButtonY())
	{
		clawPiston.Set(DoubleSolenoid::kReverse);
	}
	else if(m_stick.getButtonX())
	{
		isArmed = true;
	}
	
	//Don't touch this
	else if(m_stick.getRightTrigger())
	{
		//Pass for now
		//shooterSol.Set(true);
	}
	
	//Fires the ball
	else if(m_stick.getLeftTrigger() && isArmed)
	{
		shooterSol.Set(false);
		isLoaded = false;
		isArmed = false;
	}
	
	if(isArmed)
	{
		//printFloat("Armed", 0, 1);
	}else
	{
		//printFloat("Not Armed", 1, 2);
	}
	
}
