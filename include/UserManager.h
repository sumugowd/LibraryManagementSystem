#ifndef USERMANAGER_H
#define USERMANAGER_H

#include<vector>
#include "User.h"
#include "Student.h"
#include "Librarian.h"

using namespace std;

class UserManager {

    private:
        vector<User*> users;

    public:

        void addStudent(int id, string name);

        void addLibrarian(int id, string name);

        User* searchUser(int id);

        void displayAllUsers();

        int getUserCount();
};

#endif