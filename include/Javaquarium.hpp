#ifndef JAVAQUARIUM_H_DEFINED
#define JAVAQUARIUM_H_DEFINED

#include <vector>
#include <iostream>
#include <windows.h>
#include <ctime>
#include "Fish.hpp"
#include <Alga.hpp>
class Javaquarium
{
private:
    std::vector<Fish *> fishes;
    std::vector<Alga *> algae;
public:
    Javaquarium(int nbAlgae, std::vector<Fish *> newFishes);
    ~Javaquarium();
    void addAlga();
    int getFishesNumber() const { return fishes.size(); }; 
    //Fish* getFish(int index) const { return fishes[index]; }; To be used later 
    void removeFish(int index) { fishes.erase(fishes.begin() + index); };
    void removeAlga() {algae.pop_back();};
    int getRandomFishIndex(Fish* actualFish) const; 
    void addFish(Fish* fish) { fishes.push_back(fish); };
    void actualize();
};

#endif