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

    public:

        Transaction(int uid, int bid, string act);

        void displayTransaction();
};

#endif