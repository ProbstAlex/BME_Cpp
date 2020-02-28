#include "fibonacci.h"
#include <cmath>

int fibonacci(int f, int fprev)
{
    return f + fprev;
}

double ratio(int f, int fprev)
{
    return ((double)f)/((double)fprev);
}

double ratioDeviation(double ratio)
{
    double const GoldenRatio = (1 + sqrt(5))/2;
    return ((ratio-GoldenRatio)/GoldenRatio)*100;
}



