#include "../include/Book.h"

int main() {
    Book b1(101, "Clean Code", "Robert Martin");

    b1.displayBook();

    cout << endl;

    b1.borrowBook();

    cout << endl;

    b1.displayBook();

    return 0;
}