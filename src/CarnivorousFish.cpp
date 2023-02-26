#include <CarnivorousFish.hpp>
#include <iostream>
/*
void CarnivorousFish::eat(Fish *fish)
{
    
}*/

void CarnivorousFish::displayIdentity() const
{
    Fish::displayIdentity();
    std::cout << " - I am a carnivorous ";
    switch (breed)
    {
    case enumCarnivorous::grouper :
        std::cout << "grouper" << std::endl;
        break;
    case enumCarnivorous::tuna :
        std::cout << "tuna" << std::endl;
        break;
    case enumCarnivorous::clownFish :
        std::cout << "clownfish" << std::endl;
        break;
    }
}