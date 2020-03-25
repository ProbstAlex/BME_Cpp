#include "vector.h"
#include <iostream>
//#include <vector>
using namespace std;

Vector::Vector()
{
    m_size = 0;
}

Vector::Vector(int nbrOfValues)
{
    m_size = nbrOfValues;
    m_data = new int[m_size];
    //std::vector<int> m_size = {0};
    for (int index = 0; index < m_size; ++index)
    {
        m_data[index] = 0;
    }
}

Vector::Vector(int nbrOfValues, int vecValue)
{
    m_size = nbrOfValues;
    m_data = new int[m_size];

    //std::vector<int> m_size;

    for (int index = 0; index < m_size; ++index)
    {
        m_data[index] = vecValue;
    }
}

Vector::Vector(const Vector &vecValue)
{
    std::cout << "Copy cTor" << "\n" << std::endl;
    // Shallow copy
    m_size = vecValue.m_size;
    m_data = new int[m_size];

    for (int index = 0; index < m_size; ++index)
    {
        m_data[index] = vecValue.m_data[index];
    }
}

Vector::~Vector()
{
    cout << "Invoking destructor, clearing up" << endl;
    delete [] m_data;
    m_size = 0;
}

// Move Constructor
Vector::Vector(Vector &&moveSource) //: m_size(0), m_data(nullptr)
{
    std::cout << "Move cTor" << "\n" <<std::endl;
    if(this != &moveSource)
    {
        std::cout << "m_data " << m_data << endl;;
        //delete [] m_data;
        m_data = moveSource.m_data;
        m_size = moveSource.m_size;

        moveSource.m_data = nullptr;
        moveSource.m_size = 0;
    }
}

Vector& Vector::operator=(const Vector &copySource)
{
    std::cout << "Copy Assign cTor" << std::endl;

    // for self assignment
    //if(&copySource == this)
    //    return *this;
    if(this != &copySource)
    {
    delete[] m_data;

    m_data = new int[copySource.m_size];
    m_size = copySource.m_size ;
    std::copy(copySource.m_data, copySource.m_data+copySource.m_size, m_data);

    }
    return *this;
}
// can't get move assignment operator to get working. for v2 = v2 + vMove I tried
// to build a + operator.
Vector& Vector::operator=(Vector &&moveSource)
{
    std::cout << "Move Assign" << std::endl;
    if(this != &moveSource){//NULL) && (this != &moveSource)){
    delete[] this->m_data;

    this->m_data = moveSource.m_data;
    this->m_size = moveSource.m_size;

    moveSource.m_data = nullptr;
    moveSource.m_size = 0;
    }
    return *this;
}

Vector& Vector::operator+(const Vector &addThis)
{
    cout << "operator+ called: " << endl;

     if (addThis.m_data != NULL)
     {
         for (int index = 0; index < m_size; ++index)
         {
             m_data[index] = m_data[index] + addThis.m_data[index];
             //std::cout << "add " << m_data;
         }
    m_data = addThis.m_data;
    m_size = addThis.m_size;
    }
    return *this;
}

int Vector::size()
{
    return m_size;
}

int Vector::at(int index)
{
    //cout << m_data[index] << endl;
    if ( m_size == 0 ){
        cout << "warning: empty vector ";
        return false;
    }
    else if ( index < m_size ){
        return m_data[index];
    }
    else{
        cout << "warning: index out of bounds ";
        return false;
    }
}

void Vector::push_back(int value)
{
    int tmp_size = m_size + 1;
    int* tmp = new int[tmp_size];

    for (int index = 0; index < tmp_size; ++index)
    {
        tmp[index] = m_data[index];
    }

    tmp[m_size] = value;
    delete [] m_data;
    m_data = tmp;
    m_size = tmp_size;
}

void Vector::pop_back()
{
    int tmp_size = m_size - 1;
    int* tmp = new int[tmp_size];

    for (int index = 0; index < tmp_size; ++index)
    {
        tmp[index] = m_data[index];
        //cout << tmp[index] << endl;
    }
    delete [] m_data;
    m_data = tmp;
    m_size = tmp_size;
}

void Vector::clear()
{
    delete [] m_data;
    m_data = nullptr;
    m_size = 0;
}

void Vector::print()
{
    for (int index = 0; index < m_size; ++index)
    {
        std::cout << m_data[index] << ", ";
    }
    std::cout << std::endl;
}





