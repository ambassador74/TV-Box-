#include "Box.h"

Box::Box()
{
}

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

bool Box::getIsOn()
{
	return this->isOn;
}

int Box::getChannel()
{
	return this->channel;
}

int Box::getVolume()
{
	return this->volume;
}

Box::~Box()
{
}
