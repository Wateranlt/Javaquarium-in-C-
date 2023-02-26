#ifndef CARNIVOROUS_H_INCLUDED
#define CARNIVOROUS_H_INCLUDED

#include "Fish.hpp"
class CarnivorousFish : public Fish
{
private:
    enumCarnivorous breed;
public:
    //void eat(Fish *fish);
    CarnivorousFish(std::string nameNewFish, bool newGender, enumCarnivorous newBreed) : Fish(nameNewFish, newGender), breed(newBreed) {};
    void displayIdentity() const;
    ~CarnivorousFish();
};

#endif