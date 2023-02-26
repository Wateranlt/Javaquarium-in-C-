#include "Javaquarium.hpp"

int main(int argc, char const *argv[])
{
    std::vector<Fish *> fishes = { new CarnivorousFish("Jean", true, enumCarnivorous::grouper), 
    new CarnivorousFish("Alex", false, enumCarnivorous::tuna), 
    new HerbivorousFish("Will", true, enumHerbivorous::sole)};

    Javaquarium *simulation = new Javaquarium(5, fishes);
    std::cout << "all is working" << std::endl;
    for(int i = 0 ; i < 5 ; i++)
    {
        simulation->actualize();
    }
    delete simulation; 
    return 0;
}

//Command : g++ -Wextra -Iinclude -g src/*.cpp -o a.exe