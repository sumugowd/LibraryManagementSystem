#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"

class Student : public User {

    private:
        int borrowedBooks;

    public:

        Student();
        Student(int id, string name);

        void borrowBook();
        void returnBook();

        void displayUser() override;
};

#endif