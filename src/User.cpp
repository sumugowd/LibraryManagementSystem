#include "../include/User.h"

User::User() {
    userID = 0;
    name = "";
}

User::User(int id, string n) {
    userID = id;
    name = n;
}

int User::getUserID(){
    return userID;
}

string User::getName() {
    return name;
}

string User::getRole(){
    return role;
}

string User::getPassword(){
    return password;
}

void User::setCredentials(string r, string p){
    role = r;
    password = p;
}

void User::displayUser() {
    cout << "User ID: " << userID << endl;
    cout << "Name: " << name << endl;
}