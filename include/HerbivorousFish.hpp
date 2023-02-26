#ifndef HERBIVOROUSFISH_H
#define HERBIVOROUSFISH_H

#include "Fish.hpp"
class HerbivorousFish : public Fish
{
public:
    HerbivorousFish(std::string nameNewFish, bool newGender, enumHerbivorous newBreed) : Fish::Fish(nameNewFish, newGender), breed(newBreed) {};
    //void eat(int& algae);
    void displayIdentity() const;
    ~HerbivorousFish();

private:
    enumHerbivorous breed;
};

#endif