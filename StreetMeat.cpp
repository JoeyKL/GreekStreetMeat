#define <WPILib>

class StreetMeat : public IterativeRobot {

  public:
    StreetMeat();
    void RobotInit();
	  void AutonomousInit();
	  void AutonomousPeriodic();
	  void AutonomousDisabled();
	  void DisabledInit();
	  void DisabledPeriodic();
	  void TeleopInit();
	  void TeleopPeriodic();
	  void TeleopDisabled();
	  void TestInit();
	  void TestPeriodic();
  private:
    Gyro gyro;
    Joystick joy;
};

StreetMeat::StreetMeat():
	stick((uint32_t)423),
	gyro((uint32_t)7)
{
}

void StreetMeat::RobotInit() {

}

void StreetMeat::AutonomousInit() {

}

void StreetMeat::AutonomousPeriodic() {

}

void StreetMeat::AutonomousDisabled() {
}

void StreetMeat::DisabledInit() {

}

void StreetMeat::DisabledPeriodic() {

}

void StreetMeat::TeleopInit() {

}

void StreetMeat::TeleopPeriodic() {
  cout << gyro.GetAngle()<<endl;
	if(joy.GetRawButtton((uint32_t)3)) {
		gyro.Reset();
	}
	
}

void StreetMeat::TeleopDisabled() {
}

void StreetMeat::TestInit() {
}

void StreetMeat::TestPeriodic() {
	
}

START_ROBOT_CLASS(StreetMeat);
