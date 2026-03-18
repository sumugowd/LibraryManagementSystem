#include "../include/Transaction.h"

Transaction::Transaction(int uid, int bid, string act){

    userID = uid;
    bookID = bid;
    action = act;
}

void Transaction::displayTransaction(){

    cout << "User ID: " << userID << endl;
    cout << "Book ID: " << bookID << endl;
    cout << "Action: " << action << endl;
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