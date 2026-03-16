#include "../include/Book.h"
#include "../include/BookManager.h"
#include "../include/FIleManager.h"

int main() {

    BookManager manager;
    
    Book b1(101, "Clean Code", "Robert Martin");
    Book b2(102, "Design Patterns", "GoF");
    Book b3(103, "C++ Primer", "Lippman");

    manager.displayAllBooks();

    FileManager::saveBooks(manager.getBooks());

    return 0;
}