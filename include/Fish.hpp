#ifndef FISH_H_DEFINED
#define FISH_H_DEFINED

#include <string>
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
    void displayIdentity() const; 
};


#endif