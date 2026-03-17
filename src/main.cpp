#include "../include/Book.h"
#include "../include/BookManager.h"
#include "../include/FIleManager.h"
#include "../include/Student.h"
#include "../include/Librarian.h"
#include "../include/UserManager.h"
#include "../include/TransactionManager.h"

int main() {

    BookManager bookManager;
    UserManager userManager;
    TransactionManager transactionManager;

    bookManager.addBook(Book(101,"Clean Code", "Robert Martin"));
    bookManager.addBook(Book(102, "C++ Primer", "Lippman"));

    userManager.addStudent(1,"Sumu");

    bookManager.borrowBook(101);

    transactionManager.addTransaction(1,101,"Borrow");

    cout << "\nTransactions\n";

    transactionManager.displayTransactions();

    return 0;
}