#include "Book.h"
#include <iostream>
using namespace std;

Book::Book() {
    title = "";
    author = "";
    isbn = "";
    available = false;
}

void Book::setBookDetails(string t, string a, string i, bool av) {
    title = t;
    author = a;
    isbn = i;
    available = av;
}

void Book::displayBookDetails() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Status: " << (available ? "Available" : "Borrowed") << endl;
    cout << "-------------------------" << endl;
}

bool Book::borrowBook() {
    if (available) {
        available = false;
        return true;
    }
    return false;
}

void Book::returnBook() {
    available = true;
}