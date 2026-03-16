#include "../include/Student.h"

Student::Student() : User() {
    borrowedBooks = 0;
}

Student::Student(int id, string name) : User(id, name) {
    borrowedBooks = 0;
}

void Student::borrowBook() {
    borrowedBooks++;
}

void Student::returnBook(){
    if(borrowedBooks > 0)
        borrowedBooks--;
}

void Student::displayUser() {
    cout << "Student ID: " << userID << endl;
    cout << "Name: " << name << endl;
    cout << "Borrowed Books: " << borrowedBooks << endl;
}