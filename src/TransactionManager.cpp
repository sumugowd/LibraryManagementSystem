#include "../include/TransactionManager.h"
#include "../include/FileManager.h"
#include<ctime>

void TransactionManager::addTransaction(int userID, int bookID, string action){

    string borrowDate = getCurrentDate();
    string dueDate = getDueDate();
    
    Transaction t(userID, bookID, action, borrowDate, dueDate);

    transactions.push_back(t);

    FileManager::saveTransactions(transactions);

    cout << "Transaction recorded\n";
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

int TransactionManager::getTransactionCount(){

    return transactions.size();
}

TransactionManager::TransactionManager(){
    transactions = FileManager::loadTransactions();
}

string TransactionManager::getCurrentDate(){

    time_t now = time(0);
    tm *ltm = localtime(&now);

    return to_string(1900 + ltm->tm_year) + "-" + to_string(1 + ltm->tm_mon) + "-" + to_string(ltm->tm_mday);
}

string TransactionManager::getDueDate(){

    time_t now = time(0) + (7 * 24 * 60 * 60);

    tm *ltm = localtime(&now);

    return to_string(1900 + ltm->tm_year) + "-" + to_string(1 + ltm->tm_mon) + "-" + to_string(ltm->tm_mday);
}

int calculateFine(string dueDate){

    time_t now = time(0);
    tm *ltm = localtime(&now);

    int currentDay = ltm->tm_mday;

    int dueDay = stoi(dueDate.substr(dueDate.size()-2));

    int lateDays = currentDay - dueDay;

    if(lateDays > 0){
        return lateDays * 5;
    }

    return 0;
}