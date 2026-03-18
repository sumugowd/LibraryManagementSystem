#include "../include/Librarian.h"

Librarian::Librarian() : User() {}

Librarian::Librarian(int id, string name) : User(id, name){
    role = "admin";
}
void Librarian::displayUser() {
    cout << "Librarian ID: " << userID << endl;
    cout << "Name: " << name << endl;
}