#pragma once

#include "IsoundBehavior.hpp"
#include "IeatBehavior.hpp"
#include "ImoveBehavior.hpp"
#include <string>

class Animal
{
private:
    IsoundBehavior* _sb;
    IeatBehavior* _eb;
    ImoveBehavior* _mb;
    std::string _name;
    void printName();
public:
    Animal(std::string name, IsoundBehavior* sb, IeatBehavior* eb,ImoveBehavior* mb);
    ~Animal();
    void Sound();
    void Eat();
    void Move();
};

