#include "../include/UserManager.h"
#include <iostream>

void UserManager::addStudent(int id, string name) {
    
    users.push_back(new Student(id, name));

    cout << "Student registered successfully\n";
}

void UserManager::addLibrarian(int id, string name) {
    
    users.push_back(new Librarian(id, name));

    cout << "Librarian registered successfully\n";
}

User* UserManager::searchUser(int id) {

    for(User* user : users) {

        if(user->getUserID() == id){
            return user;
        }
    }
    return nullptr;
}

void UserManager::displayAllUsers(){

    if(users.empty()){
        cout << "No users found\n";
        return;
    }
    for(User* user : users){
        user->displayUser();
        cout << endl;
    }
}