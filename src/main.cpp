#include "../include/Library.h"
#include<iostream>

using namespace std;

int main() {

    Library library;

    int choice;

    while(true){
        
        cout << "\n====== LIBRARY MANAGEMENT SYSTEM ======\n";

        cout << "1. Add Book\n";
        cout << "2. View BOoks\n";
        cout << "3. Register Student\n";
        cout << "4. Borrow Book\n";
        cout << "5. Return Book\n";
        cout << "6. View Transaction\n";
        cout << "7. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice){
            case 1:
                library.addBook();
                break;
            
            case 2:
                library.viewBooks();
                break;

            case 3:
                library.registerStudent();
                break;

            case 4:
                library.borrowBook();
                break;

            case 5:
                library.returnBook();
                break;

            case 6:
                library.viewTransactions();
                break;

            case 7:
                cout << "Exiting system..\n";
                return 0;

            default:
                cout << "Invalid choice\n";
        }
    }
}