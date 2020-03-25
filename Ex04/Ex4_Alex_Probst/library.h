#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include "book.h"
using namespace std;

class Library
{
private:
    vector<Book> lib;
    vector<Book>::iterator deleteBook(vector<Book>::iterator it);
public:
    Library(); // default constructor
    void addBook(Book book);
    void printInventory();
    void cleanUp();
};

#endif // LIBRARY_H
