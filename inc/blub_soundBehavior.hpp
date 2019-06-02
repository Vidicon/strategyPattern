#pragma once

#include "IsoundBehavior.hpp"
#include <iostream>

class BlubSoundBehavior : public IsoundBehavior
{
public:
    BlubSoundBehavior(){}
    ~BlubSoundBehavior(){}
    void Sound();
    std::string ToString();
};
void BlubSoundBehavior::Sound()
{
    std::cout << "Sound by Blubing" << std::endl;
}
std::string BlubSoundBehavior::ToString()
{
    std::string text = "BlubSoundBehavior";
    return text;
}