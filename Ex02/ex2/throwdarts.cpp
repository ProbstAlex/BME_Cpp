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
    std :: cout << "Throw a dart: \n (x,y) coordinates: (" << x << "," << y << ")" << std::endl;
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
    std::cout << "count=" << count << std::endl;

    double pi;
    pi = 4*static_cast<double>(count)/static_cast<double>(throws);
    std::cout << std::fixed << std::setprecision(17) << "pi=" << pi << std::endl;
}
