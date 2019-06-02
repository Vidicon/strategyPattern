#pragma once

#include "ImoveBehavior.hpp"
#include <iostream>

class WalkMoveBehavior : public ImoveBehavior
{
public:
    WalkMoveBehavior(){}
    ~WalkMoveBehavior(){}
    void Move();
    std::string ToString();
};
void WalkMoveBehavior::Move()
{
    std::cout << "move by Walking" << std::endl;
}
std::string WalkMoveBehavior::ToString()
{
    std::string text = "WalkMoveBehavior";
    return text;
}