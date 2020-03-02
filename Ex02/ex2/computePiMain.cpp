#include <iostream>
#include "throwdarts.h"
#include <random>

int main ()
{
    std::cout << "******* C++ Programming I - Ex2 - Alex Probst ******* " << std::endl;
    std::cout << "Setup random generator output: " << std::endl;
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution < double > dist (0.0 , 1.0);
    std::cout << "Generate 10 random numbers between (0.0,1.0): " << std::endl;

    for (int i=0; i<10; ++i)
    {
        std :: cout << dist (mt) << "\n";
    }

    std::cout << "Throwing a dart: ";
    throwADart(dist, mt);

    std::cout << "Throwing 5 million darts: " << std::endl;
    int numberThrows = 5000000;
    throwManyDarts(dist, mt, numberThrows);

    return 0;
}
