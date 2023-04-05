#pragma once
#include <string>
using namespace std;
class Lift
{
private:
	int lowFloor;
	int hingFloor;
	int currentFloor;
	bool status;
public:
	Lift();
	Lift(int lowFloor, int hignFloor);
	Lift(int lowFloor, int hingFloor, int currentFloor, bool status);
	bool isStatus();
	int getFloor();
	string info();
	void onOff();
	int call(int floor);
};

