#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H


class ExampleClass
{
public:
    // Default Constructor
    ExampleClass(int nbrElements, int value);

    // Copy CTor
    ExampleClass(const ExampleClass& copySource);

    ~ExampleClass();

    void print();

    // Copy Assignment CTor
    ExampleClass& operator=(const ExampleClass& copySource);

    // Move CTor
    ExampleClass(ExampleClass&& moveSource);

    // Move Assignment CTor
    ExampleClass& operator=( ExampleClass&& moveSource);


    void multiplies(int factor);

private:
    int* m_data;
    int m_size;

};

#endif // EXAMPLECLASS_H
