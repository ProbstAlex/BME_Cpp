#include <iostream>
#include "library.h"
#include "book.h"

#include <vector>
using namespace std;

Library::Library()
{

}
void Library::addBook(Book book)
{
    lib.push_back(book);
}

void Library::printInventory()
{
    unsigned int size = lib.size();
    for(unsigned int i=0; i<size; ++i){  // need os stream friend in Book class to print !!!!!!!!!!!!
        cout << "Book" << i+1 << ": " << lib[i] << endl;
    }
}
void Library::cleanUp()
{
    for (vector<Book>::iterator it = begin(lib); it != end(lib);) // need pointer iterator to call book Valid function!!!
        {
            if (!it->isValidPublic())
                it = deleteBook(it);
            else
                ++it;
        }
    cout << endl << "cleaned up library:" << endl;
}

vector<Book>::iterator Library::deleteBook(vector<Book>::iterator it)
{
    return lib.erase(it);
}
