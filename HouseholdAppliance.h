#include <string>
#pragma once
class HouseholdAppliance
{
private:
	std::string name;
	std::string instruction;
	bool isOn = false;
public:
	std::string getName();
	std::string getInstruction();
};

