#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include<string>
using namespace std;

class Book {
    private:
        int bookID;
        string title;
        string author;
        bool available;

    public:

        // Constructors
        Book();
        Book(int id, string t, string a);

        // Getter functions
        int getBookID();
        string getTitle();
        string getAuthor();
        bool isAvailable();

        // Book operations
        void borrowBook();
        void returnBook();

        // Display fundtion
        void displayBook();
};

#endif