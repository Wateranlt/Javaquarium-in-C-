#include "Javaquarium.hpp"
#include <algorithm>
#include <list>

Javaquarium::Javaquarium(int nbAlgae, std::vector<Fish *> newFishes)
{
    //Faire des recherches pour copier une liste d'objets fish dans un vector non défini, surtout sur le plan de la taille
    //Y a-t-il par exemple un constructeur de copie pour copier le vecteur newFishes dans le vecteur attribut
    std::srand(std::time(0));
    for(int i = 0 ; i < nbAlgae ; i++)
        algae.push_back(new Alga());
    for(int i = 0 ; i < newFishes.size() ; i++)
        fishes.push_back(newFishes[i]);
}

Javaquarium::~Javaquarium()
{
}

void Javaquarium::addAlga()
{
    algae.push_back(new Alga());
}


void Javaquarium::actualize()
{
    static int count = 1;
    std::cout << "------------Round " << count << "-------------" << std::endl;
    int edible = 0;
    //Algae growing
    for (int i = 0 ; i < algae.size() ; i++)
    {
        algae[i]->actualize();
        if (algae[i]->getLifeSpan() >= 20)
        {
            algae.erase(algae.begin() + i);
            i--;
        }
    }    
    for (int i = 0 ; i < fishes.size() ; i++)
    {
        fishes[i]->actualize();
        if(fishes[i]->getLifeSpan() >= 20)
        {
            fishes.erase(fishes.begin() + i);
            i--;
        }
    }
    
    //Fishes' lives
    for(size_t i = 0 ; i < fishes.size() ; i++)
    {
        if (fishes[i]->getLife() <= 0)
        {
            fishes.erase(fishes.begin() + i);
        }
        if (fishes[i]->getLife() <= 5)
        {
            if(fishes[i]->getIsCarnivorous()) // IF CARNOVOROUS
            {
                if(fishes.size() > 1 && std::find_if(fishes.begin(), fishes.end(), [fish = fishes[i]](Fish *fishToBeFound) { return fishToBeFound->getBreed() != fish->getBreed();}) != fishes.end())
                {
                    edible = getRandomFishIndex(fishes[i]);
                    fishes[edible]->isBitten();
                    fishes[i]->eatFish();
                    if(fishes[edible]->getLife() <= 0)
                    {
                        fishes.erase(fishes.begin() + edible);
                    }
                }
            }
            else
            {
                edible = std::rand() % algae.size();
                algae[edible]->isEaten();
                fishes[i]->eatAlga();
                if(algae[edible]->getLifePoints() <= 0)
                    algae.erase(algae.begin() + edible);
            }
        }
        fishes[i]->displayIdentity();
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

