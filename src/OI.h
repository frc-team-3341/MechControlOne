/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
//step 12:
#include "Joystick.h"


class OI {
//step 13: eclipse always has problems when it comes to OI
private:
	//step 14: declaring the joysticks
	frc::Joystick* leftStick;
	frc::Joystick* rightStick;
public:
	OI();
	//step 15:
	Joystick* getLeftStick();
	Joystick* getRightStick();
};
