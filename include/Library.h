#ifndef LIBRARY_H
#define LIBRARY_H

#include "BookManager.h"
#include "UserManager.h"
#include "TransactionManager.h"

class Library {

    private:

        BookManager bookManager;
        UserManager userManager;
        TransactionManager transactionManager;

    public:

        void addBook();

        void viewBooks();

        void registerStudent();

        void borrowBook();

        void returnBook();

        void viewTransactions();
};

#endif