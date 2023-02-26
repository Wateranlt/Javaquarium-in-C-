#ifndef JAVAQUARIUM_H_DEFINED
#define JAVAQUARIUM_H_DEFINED

#include <vector>
#include <iostream>
#include <windows.h>
#include <ctime>
#include <CarnivorousFish.hpp>
#include <HerbivorousFish.hpp>
class Javaquarium
{
private:
    int algae;
    std::vector<Fish *> fishes;
public:
    Javaquarium(int nbAlgae, std::vector<Fish *> newFishes);
    ~Javaquarium();
    void addAlga();
    int getFishesNumber() const { return fishes.size(); }; 
    //Fish* getFish(int index) const { return fishes[index]; }; To be used later 
    void removeFish(int index) { fishes.erase(fishes.begin() + index); };
    void removeAlga() {algae--;};
    int getRandomFishIndex(Fish* actualFish) const; 
    void addCarnivorousFish(std::string name, bool gender, enumCarnivorous breed);
    void addHerbivorousFish(std::string name, bool gender, enumHerbivorous breed);
    void actualize();
};

#endif