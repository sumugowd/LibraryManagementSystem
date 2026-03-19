#include "../include/Library.h"
#include <iostream>

using namespace std;

void Library::addBook(){

    if(currentUser == nullptr){
        cout << "No user logged in\n";
        return;
    }

    if(currentUser->getRole() != "admin"){
        cout << "Access Denied\n";
        return;
    }

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

void Library::deleteBook(){

    int id;

    cout << "Enter Book ID to delete: ";
    cin >> id;

    bookManager.deleteBook(id);
}

void Library::viewBooks() {

    bookManager.displayAllBooks();

    searchEngine.indexBooks(bookManager.getBooks());
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

    int fine = 0;

    cout << "Fine (if any): Rs" << fine << endl;

    transactionManager.addTransaction(userID, bookID, "Return");
}

void Library::viewTransactions() {
    transactionManager.displayTransactions();
}

void Library::searchBook() {

    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    searchEngine.indexBooks(bookManager.getBooks());

    Book* book = searchEngine.searchBook(id);

    if(book == nullptr){
        cout << "Book not found\n";
    }else{
        book->displayBook();
    }
}

void Library::showReport() {

    reportManager.generateReport(bookManager,userManager,transactionManager);
}

void Library::setCurrentUser(User* user){
    currentUser = user;
}