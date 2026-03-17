#include "../include/Library.h"
#include <iostream>

using namespace std;

void Library::addBook(){

    int id;
    string title, author;

    cout << "Enter Book ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, title);

    cout << "Enter Author: ";
    getline(cin, author);

    bookManager.addBook(Book(id, title, author));
}

void Library::viewBooks() {

    bookManager.displayAllBooks();
}

void Library::registerStudent(){

    int id;
    string name;

    cout << "Enter Student ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    userManager.addStudent(id, name);
}

void Library::borrowBook(){

    int userID, bookID;

    cout << "Enter User ID: ";
    cin >> userID;

    cout << "Enter Book ID: ";
    cin >> bookID;

    bookManager.borrowBook(bookID);

    transactionManager.addTransaction(userID, bookID, "Borrow");
}

void Library::returnBook() {

    int userID, bookID;

    cout << "Enter User ID: ";
    cin >> userID;

    cout << "Enter Book ID: ";
    cin >> bookID;

    bookManager.returnBook(bookID);

    transactionManager.addTransaction(userID, bookID, "Return");
}

void Library::viewTransactions() {
    transactionManager.displayTransactions();
}