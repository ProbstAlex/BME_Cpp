#include "throwdarts.h"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <limits>
#include <random>

void ex2()
{
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

    throwManyDarts(dist, mt);
}

void throwManyDarts(std::uniform_real_distribution<double> dist, std::mt19937 mt) // pass by reference not necassery here
{
    int throws = 5000000;
    int count = 0;
    double radius = 1.0;

    for (int i =0; i < throws; ++i)
    {
       double x = dist(mt);
       double y = dist(mt);

       if (sqrt(x*x + y*y)<=radius)
       {
           count++;
       }
    }

    std::cout << "Throwing 5 million darts: " << std::endl << std::endl;
    std::cout << "number of hits in the first quadrant of the circle = " << count << std::endl;

    double pi;
    pi = 4*static_cast<double>(count)/static_cast<double>(throws);
    std::cout << std::fixed << std::setprecision(17) << "pi = " << pi << std::endl<< std::endl;
}
