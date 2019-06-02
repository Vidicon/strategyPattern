#pragma once

#include "IeatBehavior.hpp"
#include <iostream>

class OmnivoreEatBehavior : public IeatBehavior
{
public:
    OmnivoreEatBehavior(){}
    ~OmnivoreEatBehavior(){}
    void Eat();
    std::string ToString();
};
void OmnivoreEatBehavior::Eat()
{
    std::cout << "eat meat & plants" << std::endl;
}
std::string OmnivoreEatBehavior::ToString()
{
    std::string text = "OmnivoreEatBehavior";
    return text;
}