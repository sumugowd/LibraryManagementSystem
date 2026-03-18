#ifndef USER_H
#define USER_H

#include<iostream>
#include<string>

using namespace std;

class User {

    protected:
        int userID;
        string name;
        string role;
        string password;

    public:

        User();
        User(int id, string n);

        int getUserID();
        string getName();
        string getRole();
        string getPassword();
        void setCredentials(string r, string p);

        virtual void displayUser();
};

#endif