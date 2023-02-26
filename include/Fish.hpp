#ifndef FISH_H_DEFINED
#define FISH_H_DEFINED

#include <string>
#include <memory>
#include "Constants.hpp"
class Fish
{
private:
    std::string name;
    bool gender;
public:
    Fish(std::string nameNewFish, bool newGender) : name(nameNewFish), gender(newGender) {}; 
    ~Fish();
    std::string getName() const { return name; };
    void setName(std::string newName) { name = newName; };
    bool getGender() const { return gender; };
    void setGender(bool newGender) { gender = newGender; };
    // void eatFish(int index) {}; to be used later
    //void eatAlgua(int& alguae) { alguae--;};
    virtual void displayIdentity() const;
};


#endif