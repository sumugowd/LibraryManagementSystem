#ifndef LIBRARY_H
#define LIBRARY_H

#include "BookManager.h"
#include "UserManager.h"
#include "TransactionManager.h"
#include "SearchEngine.h"
#include "ReportManager.h"
#include "User.h"

class Library {

    private:

        BookManager bookManager;
        UserManager userManager;
        TransactionManager transactionManager;
        SearchEngine searchEngine;
        ReportManager reportManager;
        User* currentUser;

    public:

        void addBook();

        void deleteBook();

        void viewBooks();

        void registerStudent();

        void borrowBook();

        void returnBook();

        void viewTransactions();

        void searchBook();

        void showReport();

        void setCurrentUser(User* user);
};

#endif