#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
private:
    int m_size;
    int* m_data;
public:
    Vector();
    Vector(int nbrOfValues);
    Vector(int nbrOfValues, int vecValue);
    Vector(const Vector& vecValue);

    ~Vector();
    Vector(Vector&& moveSource);

    Vector &operator=(const Vector& copySource);
    Vector &operator=(Vector&& moveSource);
    Vector &operator+ (const Vector& addThis);


    int size();
    int at(int index);
    void push_back(int value);
    void pop_back();
    void clear();
    void print();
};

#endif // VECTOR_H
