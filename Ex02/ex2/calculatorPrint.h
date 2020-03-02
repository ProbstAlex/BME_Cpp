#ifndef CALCPRINT_H
#define CALCPRINT_H
#include <iostream>

using namespace std;

int add(int valA, int valB);
void add(int valA, int valB, int& result);
int addNumbers(int valA = 0, int valB = 0, int valC = 0, int valD = 0);
void printType(int intNumber);
void printType(float floatNumber);
void printType(double doubleNumber);
void printType(std::string var);




#endif //CALCPRINT_H
