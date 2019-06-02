#pragma once

#include "ImoveBehavior.hpp"
#include <iostream>

class FlyMoveBehavior : public ImoveBehavior
{
public:
    FlyMoveBehavior(){}
    ~FlyMoveBehavior(){}
    void Move();
    std::string ToString();
};
void FlyMoveBehavior::Move()
{
    std::cout << "move by Flying" << std::endl;
}
std::string FlyMoveBehavior::ToString()
{
    std::string text = "FlyMoveBehavior";
    return text;
}