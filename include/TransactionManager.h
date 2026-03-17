#ifndef TRANSACTIONMANAGER_H
#define TRANSACTIONMANAGER_H

#include <vector>
#include "Transaction.h"

using namespace std;

class TransactionManager{

    private:
        vector<Transaction> transactions;

    public:

        void addTransaction(int userID, int bookID, string action);

        void displayTransactions();
};

#endif