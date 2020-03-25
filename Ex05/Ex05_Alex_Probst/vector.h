#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>


class Vector
{
private:
    int m_size;
    int* m_data;
public:
    Vector();
    Vector(int nbrOfValues);
    Vector(int nbrOfValues, int vecValue);
    ~Vector();

    Vector(const Vector& vecValue);
    Vector(Vector&& moveSource);

    // copy assign operator
    Vector &operator=(const Vector& copySource);
    // move assign operator
    Vector &operator=(Vector&& moveSource);

    // operations
    Vector operator+ (const Vector& addThis);
    Vector operator* (const Vector& multiplyThis);

    int size();
    int at(int index);
    void push_back(int value);
    void pop_back();
    void clear();
    void print();
};

#endif // VECTOR_H
