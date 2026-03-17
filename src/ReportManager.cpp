#include "../include/ReportManager.h"
#include <iostream>

using namespace std;

void ReportManager::generateReport(BookManager& bookManager, UserManager& userManager, TransactionManager& transactionManager) {
    int totalBooks = bookManager.getBooks().size();

    int availableBooks = 0;
    int borrowedBooks = 0;

    for(Book &book : bookManager.getBooks()){

        if(book.isAvailable())
            availableBooks++;
        else
            borrowedBooks++;
    }

    cout << "\n====== LIBRARY REPORT ======\n";

    cout << "Total Books: " << totalBooks << endl;
    cout << "Available Books: " << availableBooks << endl;
    cout << "Borrowed Books: " << borrowedBooks << endl;

    cout << "Total Users: " << userManager.getUserCount() << endl;

    cout << "Total Transactions: " << transactionManager.getTransactionCount() << endl;
}