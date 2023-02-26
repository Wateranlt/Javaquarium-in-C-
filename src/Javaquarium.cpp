#include "Javaquarium.hpp"
#include <algorithm>
#include <list>

Javaquarium::Javaquarium(int nbAlgae, std::vector<Fish *> newFishes)
{
    //Faire des recherches pour copier une liste d'objets fish dans un vector non défini, surtout sur le plan de la taille
    //Y a-t-il par exemple un constructeur de copie pour copier le vecteur newFishes dans le vecteur attribut
    std::srand(std::time(0));
    algae = nbAlgae;
    for(int i = 0 ; i < newFishes.size() ; i++)
        fishes.push_back(newFishes[i]);
}

Javaquarium::~Javaquarium()
{
}

void Javaquarium::addAlga()
{
    algae++;
}

void Javaquarium::addCarnivorousFish(std::string name, bool gender, enumCarnivorous breed)
{ 
    fishes.push_back(new CarnivorousFish(name, gender, breed));
}

void Javaquarium::addHerbivorousFish(std::string name, bool gender, enumHerbivorous breed)
{ 
    fishes.push_back(new HerbivorousFish(name, gender, breed));
}

void Javaquarium::actualize()
{
    static int count = 1;
    std::cout << "------------Round " << count << "-------------" << std::endl;
    for(const auto fish : fishes)
    {
        if(fish->getGender())
        {
            if(fishes.size() > 1)
            {
                fishes.erase(fishes.begin() + getRandomFishIndex(fish));
            }
        }
        else
        {
            algae--;
        }
        fish->displayIdentity();
    }
    Sleep(1000);
    count++;
}

int Javaquarium::getRandomFishIndex(Fish* actualFish) const
{
    int randomNumber = std::rand() % fishes.size();
    while(fishes[randomNumber] == actualFish)
        randomNumber = std::rand() % fishes.size();
    return randomNumber;
}
