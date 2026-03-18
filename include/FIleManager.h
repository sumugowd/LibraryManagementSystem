#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <vector>
#include "Book.h"
#include "Transaction.h"

using namespace std;

class FileManager {

    public:

        static void saveBooks(vector<Book> &books);

        static vector<Book> loadBooks();

        static void saveTransactions(vector<Transaction>& transactions);

        static vector<Transaction> loadTransactions();

};

#endif