#include "exampleclass.h"
#include <iostream>

ExampleClass::ExampleClass(int nbrElements, int value) : m_size(nbrElements)
{
    std::cout << "Defalut cTor" << std::endl;

    m_data = new int[m_size];
    for (int index = 0; index < m_size; ++index)
    {
        m_data[index] = value;
    }
}

ExampleClass::ExampleClass(const ExampleClass &copySource)
{
    std::cout << "Copy cTor" << std::endl;
    // Shallow copy
    m_size = copySource.m_size;
    m_data = new int[m_size];

    for (int index = 0; index < m_size; ++index)
    {
        m_data[index] = copySource.m_data[index];
    }
}

ExampleClass::~ExampleClass()
{
    std::cout << "Destructor" << std::endl;
    delete [] m_data;
}

void ExampleClass::print()
{
    for (int index = 0; index < m_size; ++index)
    {
        std::cout << m_data[index] << ", ";
    }
    std::cout << std::endl;
}


ExampleClass& ExampleClass::operator=(const ExampleClass &copySource)
{
    std::cout << "Copy Assign cTor" << std::endl;

    delete[] m_data;
    m_data = new int[copySource.m_size];
    std::copy(copySource.m_data, copySource.m_data+copySource.m_size, m_data);
    m_size = copySource.m_size ;
    return *this;;
}


ExampleClass::ExampleClass(ExampleClass &&moveSource): m_data(nullptr), m_size(0)
{
    std::cout << "Move cTor" << std::endl;
    if(this != &moveSource)
    {
        std::cout << "m_data " << m_data;
        delete [] m_data;
        m_data = moveSource.m_data;
        m_size = moveSource.m_size;

        moveSource.m_data = nullptr;
        moveSource.m_size = 0;
    }
}

ExampleClass& ExampleClass::operator=(ExampleClass&& moveSource)
{
    std::cout << "Move Assign" << std::endl;

    delete[] m_data;
    m_data = moveSource.m_data;
    m_size = moveSource.m_size;

    moveSource.m_data = nullptr;
    moveSource.m_size = 0;

    return *this;
}

void ExampleClass::multiplies(int factor)
{
    for (int index = 0; index < m_size; ++index)
    {
        m_data[index] *= factor;
    }
}


