#include "../include/Library.h"
#include<iostream>

using namespace std;

int main() {

    Library library;
    UserManager userManager;

    int id;
    string password;

    cout << "===== LOGIN =====\n";

    cout << "Enter User ID: ";
    cin >> id;

    cout << "Enter Password: ";
    cin >> password;

    User* currentUser = userManager.login(id, password);

    if(currentUser == nullptr){
        cout << "Invalid credentials\n";
        return 0;
    }

    cout << "\nLogin Successful!\n";

    cout << "Welcome " << currentUser->getName() << endl;

    if(currentUser->getRole() == "student"){
        cout << "Limited access mode\n";
    }

    int choice;

    while(true){
        
        cout << "\n====== LIBRARY MANAGEMENT SYSTEM ======\n";

        cout << "1. Add Book\n";
        cout << "2. View BOoks\n";
        cout << "3. Register Student\n";
        cout << "4. Borrow Book\n";
        cout << "5. Return Book\n";
        cout << "6. View Transaction\n";
        cout << "7. Search Book\n";
        cout << "8. Show Report\n";
        cout << "9. Exit\n";

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
                library.searchBook();
                break;

            case 8:
                library.showReport();
                break;

            case 9:
                cout << "Exiting system..\n";
                return 0;

            default:
                cout << "Invalid choice\n";
        }
    }
}