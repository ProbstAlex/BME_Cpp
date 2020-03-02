#include <iostream>
#include "throwdarts.h"

int main ()
{

    throwADart();

    int throws;
    std::cout << "Enter number of dart throws: ";
    std::cin >> throws;

    throwManyDarts(throws);

    return 0;
}
