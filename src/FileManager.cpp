#include "../include/FileManager.h"
#include "../include/Transaction.h"
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

void FileManager::saveTransactions(vector<Transaction>& transactions){

    ofstream file("data/transactions.txt");

    for(Transaction &t : transactions){

        file << t.getUserID() << "|" << t.getBookID() << "|" << t.getAction() << "|" << t.getBorrowDate() << "|" << t.getDueDate() << "|" << endl;
    }
    file.close();
}

vector<Transaction> FileManager::loadTransactions() {

    vector<Transaction> transactions;

    ifstream file("data/transactions.txt");

    string line;

    while(getline(file, line)){

        stringstream ss(line);
        
        string uid, bid, action;

        getline(ss, uid, '|');
        getline(ss, bid, '|');
        getline(ss, action, '|');

        transactions.push_back(Transaction(stoi(uid), stoi(bid), action));
    }

    file.close();

    return transactions;
}