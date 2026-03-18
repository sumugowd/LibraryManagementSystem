#include "../include/UserManager.h"
#include <iostream>
#include<fstream>
#include<sstream>

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

User* UserManager::login(int id, string password){

    for(User* user : users){

        if(user->getUserID() == id && user->getPassword() == password){
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

int UserManager::getUserCount(){

    return users.size();
}

void loadUserFromFile(vector<User*>& users){

    ifstream file("data/users.txt");
    string line;

    while(getline(file, line)){

        stringstream ss(line);

        string id, name, role, password;

        getline(ss, id, '|');
        getline(ss, name, '|');
        getline(ss, role, '|');
        getline(ss, password, '|');

        if(role == "Student"){
            Student* s = new Student(stoi(id), name);
            s->setCredentials(role, password);
            users.push_back(s);
        }else{
            Librarian* l = new Librarian(stoi(id), name);
            l->setCredentials(role, password);
            users.push_back(l);
        }
    }

    file.close();
    
}

UserManager::UserManager(){
    loadUserFromFile(users);
}