#include "Javaquarium.hpp"

Javaquarium::Javaquarium(int nbAlgae, std::vector<Fish> newFishes)
{
    //Faire des recherches pour copier une liste d'objets fish dans un vector non défini, surtout sur le plan de la taille
    //Y a-t-il par exemple un constructeur de copie pour copier le vecteur newFishes dans le vecteur attribut
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

void Javaquarium::addFish(std::string name, bool gender)
{ 
    fishes.push_back(Fish(name, gender));
}

void Javaquarium::actualize()
{
    static int count = 1;
    std::cout << "------------Round " << count << "-------------" << std::endl;
    for(const auto &item : fishes)
    {
        item.displayIdentity();
    }
    Sleep(1000);
    count++;
}