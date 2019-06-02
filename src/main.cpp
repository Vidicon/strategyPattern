#include <iostream>
#include <stdint.h>
#include <vector>

#include "animal.hpp"

#include "IsoundBehavior.hpp"
#include "IeatBehavior.hpp"
#include "ImoveBehavior.hpp"

//sounds
#include "sing_soundBehavior.hpp"
#include "bark_soundBehavior.hpp"
#include "blub_soundBehavior.hpp"
#include "moo_soundBehavior.hpp"

//eat
#include "omnivore_eatBehavior.hpp"
#include "carnivore_eatBehavior.hpp"
#include "herbivore_eatBehavior.hpp"

//move
#include "walk_moveBehavior.hpp"
#include "swim_moveBehavior.hpp"
#include "fly_moveBehavior.hpp"


int main(int argc, char *argv[])
{

    std::vector<Animal*> animalList;
    std::cout << "[Main] adding annimals:" << std::endl << std::endl;
    
    animalList.push_back(new Animal("Hummingbird", new SingSoundBehavior(), new HerbivoreEatBehavior() ,new FlyMoveBehavior()));
    animalList.push_back(new Animal("owl", new SingSoundBehavior(), new CarnivoreEatBehavior() ,new FlyMoveBehavior()));
    animalList.push_back(new Animal("crow", new SingSoundBehavior(), new OmnivoreEatBehavior() ,new FlyMoveBehavior()));

    animalList.push_back(new Animal("rabbitfish", new BlubSoundBehavior(), new HerbivoreEatBehavior() ,new SwimMoveBehavior()));
    animalList.push_back(new Animal("piranhas", new BlubSoundBehavior(), new CarnivoreEatBehavior() ,new SwimMoveBehavior()));

    animalList.push_back(new Animal("dog", new BarkSoundBehavior(), new CarnivoreEatBehavior() ,new WalkMoveBehavior()));
    animalList.push_back(new Animal("cow", new MooSoundBehavior(), new HerbivoreEatBehavior() ,new WalkMoveBehavior()));
    
    std::cout << std::endl << "[Main] let them eat:" << std::endl << std::endl;

    for(int i = 0; i < animalList.size(); i++)
    {
        animalList[i]->Eat();
    }

    std::cout << std::endl << "[Main] let them move:" << std::endl << std::endl;

    for(int i = 0; i < animalList.size(); i++)
    {
        animalList[i]->Move();
    }

    std::cout << std::endl << "[Main] let them make a sound:" << std::endl << std::endl;

    for(int i = 0; i < animalList.size(); i++)
    {
        animalList[i]->Sound();
    }

    std::cout << std::endl << "[Main] remove them:" << std::endl << std::endl;

    for(int i = 0; i < animalList.size(); i++)
    {
        delete animalList[i];
        animalList[i] = NULL;
    }
    animalList.clear();

    std::cout << std::endl <<"[Main] quit program" << std::endl << std::endl;

    return 0;
}
