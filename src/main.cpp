#include "Javaquarium.hpp"

int main(int argc, char const *argv[])
{
    std::vector<Fish *> fishes = { new Fish("Jean", true, true, enumBreed::clownFish), 
    new Fish("Alex", false, false, enumBreed::bass), 
    new Fish("Will", true, true, enumBreed::tuna),
    new Fish("Zach", true, false, enumBreed::sole)};
    
    Javaquarium *simulation = new Javaquarium(3, fishes);
    for(int i = 0 ; i < 22 ; i++)
    {
        simulation->actualize();
    }
    delete simulation; 
    return 0;
}

//Command : g++ -Wextra -Iinclude -g src/*.cpp -o a.exe