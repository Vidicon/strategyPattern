#pragma once

#include "IsoundBehavior.hpp"
#include <iostream>

class MooSoundBehavior : public IsoundBehavior
{
public:
    MooSoundBehavior(){}
    ~MooSoundBehavior(){}
    void Sound();
    std::string ToString();
};
void MooSoundBehavior::Sound()
{
    std::cout << "Sound by Mooing" << std::endl;
}
std::string MooSoundBehavior::ToString()
{
    std::string text = "MooSoundBehavior";
    return text;
}