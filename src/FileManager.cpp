#include "../include/FIleManager.h"
#include<fstream>
#include<sstream>

void FileManager::saveBooks(vector<Book> &books) {

    ofstream file("data/books.txt");

    for(Book &book : books) {

        file << book.getBookID() << "|"
            << book.getTitle() << "|"
             << book.getAuthor() << "|"
             << book.isAvailable()
             << endl;
    }

    file.close();
}

vector<Book> FileManager::loadBooks() {

    vector<Book> books;

    ifstream file("data/books.txt");

    string line;

    while(getline(file, line)){
        stringstream ss(line);

        string id, title, author, available;

        getline(ss, id, '|');
        getline(ss, title, '|');
        getline(ss, author, '|');
        getline(ss, available, '|');

        Book book(stoi(id), title, author);

        if(available == "0"){
            book.borrowBook();
        }
        books.push_back(book);
    }

    file.close();

    return books;
}