#ifndef ALGA_H
#define ALGA_H

class Alga
{
private:
    short int lifePoints;
public:
    Alga() : lifePoints(10) {} ;
    void grow() {lifePoints += 1; }; 
    void isEaten() { lifePoints -= 2; };
    short int getLifePoints() const { return lifePoints; };
    ~Alga();
};

#endif