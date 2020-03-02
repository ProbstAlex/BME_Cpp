#include "throwdarts.h"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <limits>
#include <random>

void throwADart(std::uniform_real_distribution<double>& dist, std::mt19937& mt)
{
    double x = dist(mt);
    double y = dist(mt);
    std::cout << "Throwing a dart: "<< std::endl << std::endl;
    std :: cout << "(x,y) coordinates: (" << x << "," << y << ")" << std::endl << std::endl;
}

void throwManyDarts(std::uniform_real_distribution<double>& dist, std::mt19937& mt, int throws)
{
    int count = 0;
    double radius = 1.0;
    for (int i =0; i < throws; ++i)
    {
       double x = dist(mt);
       double y = dist(mt);

       if ((x*x + y*y)<=radius)
       {
           count++;
       }
    }
    std::cout << "Throwing 5 million darts: " << std::endl << std::endl;
    std::cout << "number hits in the first quadrant of the circle = " << count << std::endl;

    double pi;
    pi = 4*static_cast<double>(count)/throws; //static_cast<double>(count)/static_cast<double>(throws);
    std::cout << std::fixed << std::setprecision(17) << "pi = " << pi << std::endl<< std::endl;
}
