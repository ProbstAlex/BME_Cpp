#include <iostream>
#include "throwdarts.h"
#include <random>

int main ()
{
    std::cout << "******* C++ Programming I - Ex2 - Alex Probst ******* " << std::endl << std::endl;
    std::cout << "Setup random number generator output using Mersenne Twister... " << std::endl;

    std::random_device rd; // Create Random Device as seed
    std::mt19937 mt(rd()); // Init Mersenne Twister Engine with that seed
    std::uniform_real_distribution < double > dist (0.0 , 1.0); // A continuous random distribution on the range [ min , max ] with equal probability

    std::cout << "Generate 10 random numbers between (0.0,1.0): " << std::endl;

    for (int i=0; i<10; ++i)
    {
        std :: cout << dist (mt) << "\n";
    }
    std::cout << std::endl;

    throwADart(dist, mt);

    int numberThrows = 5000000;
    throwManyDarts(dist, mt, numberThrows);

    return 0;
}
