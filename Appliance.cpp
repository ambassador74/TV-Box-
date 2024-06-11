#include <iostream>
#include "Box.h"
#include "HouseholdAppliance.h"

int main()
{
    unsigned int channel, volume;
    bool isOn;
    std::cout << "Please input channel, volume and set turn on/turn off through space" << std::endl;
    std::cin >> channel >> volume >> isOn;  
    Box TV;
    TV.turnOn(isOn);
    if (TV.getIsOn() == true)
    {
        TV.switchVolume(volume);
        TV.switchChannel(channel);
    }
    std::cout << "Параметры: " << TV.getVolume() << " " << TV.getVolume() << " " << TV.getIsOn << std::endl;
    return 0;
}
