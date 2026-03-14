#include "../include/Book.h"
#include "../include/BookManager.h"

int main() {

    BookManager manager;
    
    Book b1(101, "Clean Code", "Robert Martin");
    Book b2(102, "Design Patterns", "GoF");
    Book b3(103, "C++ Primer", "Lippman");

    manager.addBook(b1);
    manager.addBook(b2);
    manager.addBook(b3);

    cout << "\nAll Books\n";

    manager.displayAllBooks();

    cout << "\nBorrow Book 102\n";

    manager.borrowBook(102);

    cout << "\nBooks After Borrow\n";

    manager.displayAllBooks();

    return 0;
}