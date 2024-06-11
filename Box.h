#pragma once
#include "HouseholdAppliance.h"
class Box : public HouseholdAppliance
{
private:
	unsigned int channel = -1;
	unsigned int volume = -1;
	const std::string screenResolution = "2560*1440";
	bool isOn = false;
public:
	Box();
	void switchChannel(unsigned int const& channel);
	void switchVolume(unsigned int const& volume);
	bool turnOn(bool isOn);
	bool getIsOn();
	int getChannel();
	int getVolume();
	~Box();
};

