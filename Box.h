#pragma once
#include "HouseholdAppliance.h"
class Box : public HouseholdAppliance
{
private:
	unsigned int currentChannel;
	unsigned int volume;
	std::string screenResolution;
	bool isOn;
public:
	void switchChannel();
	void switchVolume();
};

