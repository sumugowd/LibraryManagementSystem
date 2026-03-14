#ifndef BOOKMANAGER_H
#define BOOKMANAGER_H

#include<vector>
#include "Book.h"

using namespace std;

class BookManager {

    private:
        vector<Book> books;

    public:

        void addBook(Book book);

        void displayAllBooks();

        Book* searchBookByID(int id);

        void borrowBook(int id);

        void returnBook(int id);

};

#endif