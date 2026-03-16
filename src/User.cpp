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

void User::displayUser() {
    cout << "User ID: " << userID << endl;
    cout << "Name: " << name << endl;
}