#ifndef LIBRARY_H
#define LIBRARY_H

#include "BookManager.h"
#include "UserManager.h"
#include "TransactionManager.h"
#include "SearchEngine.h"

class Library {

    private:

        BookManager bookManager;
        UserManager userManager;
        TransactionManager transactionManager;
        SearchEngine searchEngine;

    public:

        void addBook();

        void viewBooks();

        void registerStudent();

        void borrowBook();

        void returnBook();

        void viewTransactions();

        void searchBook();
};

#endif