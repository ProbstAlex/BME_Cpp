#include <iostream>
//#include "calculatorPrint.h"

using namespace std;

int add(int valA, int valB)
{
    return valA + valB;
}

void add(int valA, int valB, int& result)
{
    result = valA + valB;
}

int addNumbers(int valA, int valB, int valC, int valD)
{
    return valA + valB + valC + valD;
}

void printType(int var)
{
    std::cout << "The passed variable " << var << " is of type integer" << std::endl;
}
void printType(float var)
{
    std::cout << "The passed variable " << var << " is of type float" << std::endl;
}
void printType(double var)
{
    std::cout << "The passed variable " << var << " is of type double" << std::endl;
}
void printType(std::string var)
{
    std::cout << "The passed variable " << var << " is of type string" << std::endl;
}


