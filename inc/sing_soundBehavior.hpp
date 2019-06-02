#pragma once

#include "IsoundBehavior.hpp"
#include <iostream>

class SingSoundBehavior : public IsoundBehavior
{
public:
    SingSoundBehavior(){}
    ~SingSoundBehavior(){}
    void Sound();
    std::string ToString();
};
void SingSoundBehavior::Sound()
{
    std::cout << "Sound by Singing" << std::endl;
}
std::string SingSoundBehavior::ToString()
{
    std::string text = "SingSoundBehavior";
    return text;
}