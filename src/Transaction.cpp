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