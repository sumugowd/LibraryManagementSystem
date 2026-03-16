#include "../include/Book.h"
#include "../include/BookManager.h"
#include "../include/FIleManager.h"
#include "../include/Student.h"
#include "../include/Librarian.h"
#include "../include/UserManager.h"

int main() {

    UserManager manager;

    manager.addStudent(1, "Sumu");
    manager.addStudent(2, "Ravi");

    manager.addLibrarian(100, "Admin");

    cout << "\nAll User\n";

    manager.displayAllUsers();

    cout << "\nSearch User ID 2\n";

    User* user = manager.searchUser(2);

    if(user != nullptr)
        user->displayUser();
    else
        cout << "User not found\n";

    return 0;
}