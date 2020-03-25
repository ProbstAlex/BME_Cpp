#include "book.h"
#include <iostream>
#include <algorithm>

using namespace std;

Book::Book(string title, string author, string isbn): m_title(title), m_author(author), m_isbn(isbn){
    m_isValid = isValidInput() && isValidISBN();
}

bool Book::isValid()
{

    if (m_isValid == true){
        return true;}
    else{
        return false;}
}

bool Book::isValidInput()
{
    if (m_title.empty()){return false;}
    if (m_author.empty()) {return false;}
    else {return true;}
}

bool Book::isValidISBN()
{
    string isbn = m_isbn;
    isbn.erase(remove(isbn.begin(), isbn.end(), '-' ), isbn.end());

    if (isbn.size() != 10) {
        //cout << "invalid isbn size" << endl;
        return false;}

    int sum = {0};
    for(int i = 0;i<9;i++){
        sum = sum + (i+1)*stoi(isbn.substr(i,1));
    }

    if (sum % 11 != stoi(isbn.substr(9,1))){
        //cout << "invalid isbn check" << endl;
        return false;}
    else {
        //cout << "valid isbn" << endl;
        return true;}
}



void Book::requestValidity()
{
    if (isValid()==false){
        cout << "book marked as invalid" << endl;}
    else{
        cout << "book marked as valid" << endl;}
}

void Book::requestBookInformation()
{
    //Book(m_title, m_author, m_isbn);
    cout << "title= \"" << m_title << "\", Author= \"" << m_author<< "\", ISBN= \"" << m_isbn<< "\" " << endl;
    requestValidity();
    if (m_title.empty()){cout << "invalid title" << endl;}
    if (m_author.empty()) {cout << "invalid author" << endl;}

    string isbn = m_isbn;
    isbn.erase(remove(isbn.begin(), isbn.end(), '-' ), isbn.end());

    if (isbn.size() != 10) {
        cout << "invalid isbn size" << endl;}

    int sum = {0};
    for(int i = 0;i<9;i++){sum = sum + (i+1)*stoi(isbn.substr(i,1));}

    if (sum % 11 != stoi(isbn.substr(9,1))){
        cout << "invalid isbn check number" << endl;}
}

bool Book::isValidPublic()
{
    if (m_isValid == true){
        return true;}
    else{
        return false;}
}

ostream& operator<<(ostream& os, const Book& book)
{
    os << "title= \"" << book.m_title << "\", Author= \"" << book.m_author << "\", ISBN= \"" << book.m_isbn << "\", Validity=" << book.m_isValid;
    return os;
}

