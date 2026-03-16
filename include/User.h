#ifndef USER_H
#define USER_H

#include<iostream>
#include<string>

using namespace std;

class User {

    protected:
        int userID;
        string name;

    public:

        User();
        User(int id, string n);

        int getUserID();
        string getName();

        virtual void displayUser();
};

#endif