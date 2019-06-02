#pragma once

#include "IeatBehavior.hpp"
#include <iostream>

class HerbivoreEatBehavior : public IeatBehavior
{
public:
    HerbivoreEatBehavior(){}
    ~HerbivoreEatBehavior(){}
    void Eat();
    std::string ToString();
};
void HerbivoreEatBehavior::Eat()
{
    std::cout << "eat plants" << std::endl;
}
std::string HerbivoreEatBehavior::ToString()
{
    std::string text = "HerbivoreEatBehavior";
    return text;
}