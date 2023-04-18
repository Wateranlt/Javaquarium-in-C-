#ifndef FISH_H_DEFINED
#define FISH_H_DEFINED

#include <string>
#include <memory>
#include "Constants.hpp"
#include <string>

enum class enumBreed {sole, bass, carp, grouper, tuna, clownFish};
class Fish
{
private:
    std::string name;
    short int lifePoints;
    bool gender;
    enumBreed breed;
    bool isCarnivorous;
    short int lifeSpan;
public:
    Fish(std::string nameNewFish, bool gender, bool isCarnivorous, enumBreed breed) : name(nameNewFish), gender(gender), 
    isCarnivorous(isCarnivorous), breed(breed), lifePoints(10), lifeSpan(0) {}; 
    ~Fish();
    std::string getName() const { return name; };
    void setName(std::string newName) { name = newName; };
    bool getGender() const { return gender; };
    bool getIsCarnivorous() const { return isCarnivorous; }; 
    void setGender(bool newGender) { gender = newGender; };
    void isBitten() {lifePoints -= 4; };
    void isHungry() {lifePoints--;}
    void eatAlga() { lifePoints += 3; };
    void eatFish() { lifePoints += 5; };
    short int getLife() const {return lifePoints; };
    void displayIdentity() const;
    enumBreed getBreed() const {return breed; };
    void actualize() { isHungry(); lifeSpan++; };
    short int getLifeSpan() const { return lifeSpan; };
};


#endif