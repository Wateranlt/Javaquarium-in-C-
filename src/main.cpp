#include "Javaquarium.hpp"

int main(int argc, char const *argv[])
{
    std::vector<Fish> fishes = {{"Jean", true}, {"Alex", false}, {"Will", true}};
    Javaquarium *simulation = new Javaquarium(5, fishes);
    std::cout << "all is working" << std::endl;
    for(int i = 0 ; i < 3 ; i++)
    {
        simulation->actualize();
    }
    delete simulation; 
    return 0;
}
