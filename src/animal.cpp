#include "animal.hpp"
#include <iostream>
Animal::Animal(std::string name, IsoundBehavior* sb, IeatBehavior* eb,ImoveBehavior* mb):_name(name),_sb(sb),_eb(eb),_mb(mb)
{
    std::cout << "Made animal: \"" << _name << "\" with: " << _sb->ToString() << ", " << _eb->ToString() << ", " << _mb->ToString() << std::endl; 
}

Animal::~Animal()
{
    delete _sb;
    _sb = NULL;
    delete _eb;
    _eb = NULL;
    delete _mb;
    _mb = NULL;
    std::cout << "Removed animal: \"" << _name << "\"" << std::endl;
    _name.erase();
}

void Animal::Sound()
{
    printName();
    _sb->Sound();
}

void Animal::Eat()
{
    printName();
    _eb->Eat();
}

void Animal::Move()
{
    printName();
    _mb->Move();
}

void Animal::printName()
{
    std::cout << "[" << _name << "] ";
}