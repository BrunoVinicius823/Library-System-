#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
    bool available;

public:
    Book();
    void setBookDetails(string t, string a, string i, bool av);
    void displayBookDetails();
    bool borrowBook();
    void returnBook();
    string getIsbn() { return isbn; }
    bool getAvailable() { return available; }
};

#endif