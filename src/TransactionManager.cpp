#include "../include/TransactionManager.h"

void TransactionManager::addTransaction(int userID, int bookID, string action){
    
    Transaction t(userID, bookID, action);

    transactions.push_back(t);

    cout << "Transaction recorder\n";
}

void TransactionManager::displayTransactions(){
    
    if(transactions.empty()){
        cout << "No transactions found\n";
        return;
    }

    for(Transaction &t : transactions){

        t.displayTransaction();
        cout << endl;
    }
}