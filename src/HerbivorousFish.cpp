#include "HerbivorousFish.hpp"
#include <iostream>
/*
void HerbivorousFish::eat(int &algae)
{
    
}*/

void HerbivorousFish::displayIdentity() const
{
    Fish::displayIdentity(); 
    std::cout << " - I am an herbivorous ";
    switch (breed)
    {
    case enumHerbivorous::sole :
        std::cout << "sole" << std::endl;
        break;
    case enumHerbivorous::bass :
        std::cout << "bass" << std::endl;
        break;
    case enumHerbivorous::carp :
        std::cout << "carp" << std::endl;
        break;
    }
}
