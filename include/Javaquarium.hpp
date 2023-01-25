#ifndef JAVAQUARIUM_H_DEFINED
#define JAVAQUARIUM_H_DEFINED

#include <vector>
#include <iostream>
#include <windows.h>
#include "Fish.hpp"

class Javaquarium
{
private:
    int algae;
    std::vector<Fish> fishes;
public:
    Javaquarium(int nbAlgae, std::vector<Fish> newFishes);
    ~Javaquarium();
    void addAlga();
    void addFish(std::string name, bool gender);
    void actualize();
};

#endif