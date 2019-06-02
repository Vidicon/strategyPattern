#pragma once

#include "IeatBehavior.hpp"
#include <iostream>

class CarnivoreEatBehavior : public IeatBehavior
{
public:
    CarnivoreEatBehavior(){}
    ~CarnivoreEatBehavior(){}
    void Eat();
    std::string ToString();
};
void CarnivoreEatBehavior::Eat()
{
    std::cout << "eat meat" << std::endl;
}
std::string CarnivoreEatBehavior::ToString()
{
    std::string text = "CarnivoreEatBehavior";
    return text;
}