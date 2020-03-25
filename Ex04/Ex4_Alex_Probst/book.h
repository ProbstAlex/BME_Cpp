#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <algorithm>
using namespace std;

class Book
{
private:
     // define private members. Need a member function of the same class to access member data from outside
    string m_title, m_author, m_isbn;
    bool m_isValid;
    bool isValid();
    bool isValidInput();
    bool isValidISBN();
    string isValidString();

public:
    Book(string title, string author, string isbn); // overloaded constructor
    void requestValidity();
    void requestBookInformation();
    bool isValidPublic();
    friend ostream& operator<<(ostream& os, const Book& book);
};



#endif // BOOK_H
