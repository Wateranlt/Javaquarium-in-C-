#include "Fish.hpp"
#include <iostream>

Fish::~Fish()
{
}

void Fish::displayIdentity() const
{
    std::cout << "Name : " << name << " - Gender : I am a " << ((isCarnivorous) ? "Carnivorous " : "Herbivorous ");
    switch (breed)
    {
    case enumBreed::sole:
        std::cout << "sole" << std::endl;
        break;
    case enumBreed::tuna:
        std::cout << "tuna" << std::endl;
        break;
    case enumBreed::grouper:
        std::cout << "grouper" << std::endl;
        break;
    case enumBreed::carp:
        std::cout << "carp" << std::endl;
        break;
    case enumBreed::clownFish:
        std::cout << "clownFish" << std::endl;
        break;
    case enumBreed::bass:
        std::cout << "bass" << std::endl;
        break;
    }
    std:: cout << " My PV are " << lifePoints << std::endl;
}
