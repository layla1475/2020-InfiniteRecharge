#pragma once

#include "controllers/Controllers.h"
#include "RobotMap.h"

class ControlPannel {
	public:
		ControlPannel(wml::Gearbox &ControlPannelMotor, wml::controllers::SmartControllerGroup &contGroup);

		void TeleopOnUpdate(double dt);
		void AutoOnUpdate(double dt);
		void TestOnUpdate(double dt);

	private:
		wml::Gearbox &_ControlPannelMotor;
		wml::controllers::SmartControllerGroup &_contGroup;
};