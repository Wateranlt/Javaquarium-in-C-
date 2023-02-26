#include "Fish.hpp"
#include <iostream>

Fish::~Fish()
{
}

void Fish::displayIdentity() const
{
    std::cout << "Name : " << name << " - Gender : ";
}

