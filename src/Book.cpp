#include "../include/Book.h"

// Default constructor
Book::Book() {
    bookID = 0;
    title = "";
    author = "";
    available = true;
}

// Parameterized constructor
Book::Book(int id, string t, string a) {
    bookID = id;
    title = t;
    author = a;
    available = true;
}

int Book::getBookID(){
    return bookID;
}

string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
}

bool Book::isAvailable(){
    return available;
}

void Book::borrowBook() {
    if(available){
        available = false;
        cout << "Book borrowed successfully\n";
    }else{
        cout << "Book is already borrowed\n";
    }
}

void Book::returnBook() {
    available = true;
    cout << "Book returned successfully\n";
}

void Book::displayBook() {
    cout << "ID: " << bookID << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Available: " << (available ? "Yes" : "No") << endl;
}