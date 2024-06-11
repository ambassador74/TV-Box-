#include "Box.h"

void Box::switchChannel(unsigned int const& channel)
{
	this->channel = channel;
}

void Box::switchVolume(unsigned int const& volume)
{
	this->volume = volume;
}

bool Box::turnOn(bool isOn)
{
	this->isOn = isOn;
}
