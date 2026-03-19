#include "../include/Transaction.h"

Transaction::Transaction(int uid, int bid, string act, string bDate, string dDate){

    userID = uid;
    bookID = bid;
    action = act;
    borrowDate = bDate;
    dueDate = dDate;
}

Transaction::Transaction(int uid, int bid, string act){

    userID = uid;
    bookID = bid;
    action = act;
}

void Transaction::displayTransaction(){

    cout << "User ID: " << userID << endl;
    cout << "Book ID: " << bookID << endl;
    cout << "Action: " << action << endl;
    cout << "Borrow Date: " << borrowDate << endl;
    cout << "Due Date: " << dueDate << endl;
}

int Transaction::getUserID(){
    return userID;
}

int Transaction::getBookID(){
    return bookID;
}

string Transaction::getAction(){
    return action;
}

string Transaction::getBorrowDate() {
    return borrowDate;
}

string Transaction::getDueDate(){
    return dueDate;
}