#include "Lift.h"
#include <iostream>
Lift::Lift(){
	this->lowFloor = 0;
	this->hingFloor = 10;
	this->currentFloor = this->hingFloor;
	this->status = false;
}

Lift::Lift(int lowFloor, int hignFloor) {
	this->lowFloor = lowFloor;
	this->hingFloor = hignFloor;
	this->currentFloor = currentFloor;
}

Lift::Lift(int lowFloor, int hingFloor, int currentFloor, bool status) {

}

bool Lift::isStatus()
{
	return this->status;
}

int Lift::getFloor()
{
	return currentFloor;
}

string Lift::info()
{
	string s;
	s.append("Ýòàæ ");
	s += (std::to_string(this->getFloor()));
	s.append("Ñòàòóñ ");
		if (isStatus())
		{
			s.append("ÂÊË");
		}
		else
		{
			s.append("ÂÛÊË ");
		}
		return s;
}

void Lift::onOff()
{
	this->status = !this->status;
}

int Lift::call(int floor)
{
	if (!(floor>=lowFloor&& floor <= hingFloor))
	{
		return -1;
	}
	if (floor < currentFloor)
	{
		for (currentFloor; currentFloor > floor; currentFloor--) {
			cout << info() << endl;
		}
	}
	else
	{
		for (currentFloor; currentFloor < floor; currentFloor++) {
			cout << info() << endl;
		}
	}
	return 0;
}
