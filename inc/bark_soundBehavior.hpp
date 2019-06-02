#pragma once

#include "IsoundBehavior.hpp"
#include <iostream>

class BarkSoundBehavior : public IsoundBehavior
{
public:
    BarkSoundBehavior(){}
    ~BarkSoundBehavior(){}
    void Sound();
    std::string ToString();
};
void BarkSoundBehavior::Sound()
{
    std::cout << "Sound by Barking" << std::endl;
}
std::string BarkSoundBehavior::ToString()
{
    std::string text = "BarkSoundBehavior";
    return text;
}