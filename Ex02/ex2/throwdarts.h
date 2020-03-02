#ifndef THROWDARTS_H
#define THROWDARTS_H
#include <random>

void throwADart(std::uniform_real_distribution<double>& dist, std::mt19937& mt);
void throwManyDarts(std::uniform_real_distribution<double>& dist, std::mt19937& mt, int throws);



#endif // THROWDARTS_H
