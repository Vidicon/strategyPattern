#pragma once

#include "ImoveBehavior.hpp"
#include <iostream>

class SwimMoveBehavior : public ImoveBehavior
{
public:
    SwimMoveBehavior(){}
    ~SwimMoveBehavior(){}
    void Move();
    std::string ToString();
};
void SwimMoveBehavior::Move()
{
    std::cout << "move by Swiming" << std::endl;
}
std::string SwimMoveBehavior::ToString()
{
    std::string text = "SwimMoveBehavior";
    return text;
}