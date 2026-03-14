#include "../include/BookManager.h"
#include <iostream>

using namespace std;

void BookManager::addBook(Book book) {

    books.push_back(book);

    cout << "Book added successfully\n";
}

void BookManager::displayAllBooks() {
    
    if(books.empty()) {
        cout << "No books available\n";
        return;
    }

    for(Book &book : books) {
        book.displayBook();
        cout << endl;
    }
}

Book* BookManager::searchBookByID(int id) {

    for(Book &book : books){

        if(book.getBookID() == id) {
            return &book;
        }
    }
    
    return nullptr;
}

void BookManager::borrowBook(int id) {

    Book* book = searchBookByID(id);

    if(book == nullptr) {
        cout << "Book not fount\n";
        return;
    }

    book ->borrowBook();
}

void BookManager::returnBook(int id) {

    Book* book = searchBookByID(id);

    if(book == nullptr) {
        cout << "Book not found\n";
        return;
    }

    book->returnBook();
}