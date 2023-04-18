#ifndef ALGA_H
#define ALGA_H

class Alga
{
private:
    short int lifePoints;
    short int lifeSpan;
public:
    Alga() : lifePoints(10) {} ;
    void grow() {lifePoints += 1; }; 
    void isEaten() { lifePoints -= 2; };
    short int getLifePoints() const { return lifePoints; };
    void actualize() {grow(); lifeSpan++; };
    short int getLifeSpan() const { return lifeSpan; };
    ~Alga();
};

#endif