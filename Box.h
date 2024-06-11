#pragma once
#include "HouseholdAppliance.h"
class Box : public HouseholdAppliance
{
private:
	unsigned int channel;
	unsigned int volume;
	const std::string screenResolution = "2560*1440";
	bool isOn = false;
public:
	void switchChannel(unsigned int const& channel);
	void switchVolume(unsigned int const& volume);
	bool turnOn(bool isOn);
};

