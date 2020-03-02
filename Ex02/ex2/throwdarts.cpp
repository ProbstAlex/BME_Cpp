#include "throwdarts.h"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <limits>
#include <random>

void throwADart()
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution < double > dist (0.0 , 1.0);

    double x = dist(mt);
    double y = dist(mt);
    std :: cout << "Throw a dart: \n (x,y) coordinates: (" << x << "," << y << ")" << std::endl;
}

void throwManyDarts(int throws)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution < double > dist (0.0 , 1.0);

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
