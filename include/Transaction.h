#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include<string>

using namespace std;

class Transaction {

    private:
        int userID;
        int bookID;
        string action;

        string borrowDate;
        string dueDate;

    public:

        Transaction(int uid, int bid, string act);

        Transaction(int uid, int bid, string act, string bDate, string dDate);

        void displayTransaction();

        int getUserID();
        int getBookID();
        string getAction();
        string getBorrowDate();
        string getDueDate();
};

#endif