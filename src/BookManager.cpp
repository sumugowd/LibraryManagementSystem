#include "../include/BookManager.h"
#include "../include/FIleManager.h"
#include <iostream>

using namespace std;

void BookManager::addBook(Book book) {

    books.push_back(book);

    FileManager::saveBooks(books);

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

vector<Book>& BookManager::getBooks(){
    return books;
}

void BookManager::borrowBook(int id) {

    Book* book = searchBookByID(id);

    if(book == nullptr) {
        cout << "Book not found\n";
        return;
    }

    book ->borrowBook();

    FileManager::saveBooks(books);
}

void BookManager::returnBook(int id) {

    Book* book = searchBookByID(id);

    if(book == nullptr) {
        cout << "Book not found\n";
        return;
    }

    book->returnBook();

    FileManager::saveBooks(books);
}

BookManager::BookManager(){
    books = FileManager::loadBooks();
}