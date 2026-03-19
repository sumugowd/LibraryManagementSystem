# 📚 Library Management System (C++)

A **Library Management System** built using **C++**, demonstrating the use of Object-Oriented Programming, Data Structures, and File Handling.
The application simulates a real-world library where books, users, and transactions are managed efficiently with persistent storage.

---

# 🚀 Features

* Add, view, and delete books
* Prevent duplicate book IDs
* Register students and librarians
* Login system with authentication
* Role-based access (Admin / Student)
* Borrow and return books
* Track transactions with history
* Search books by ID
* Generate library reports and statistics
* Persistent storage using file handling

---

# 🧠 Concepts Used

### Object-Oriented Programming

* Classes and Objects
* Encapsulation
* Inheritance
* Polymorphism

### Data Structures

* `vector` for dynamic storage
* `map` for efficient lookup

### File Handling

* Store and retrieve books, users, and transactions from files

### Software Design

* Modular architecture
* Manager classes
* Menu-driven system
* Separation of concerns

---

# 🏗️ Project Architecture

```
Library
 ├── BookManager
 ├── UserManager
 ├── TransactionManager
 ├── SearchEngine
 └── ReportManager
```

### Core Classes

```
Book
User
Student
Librarian
Transaction
```

### System Classes

```
Library
BookManager
UserManager
TransactionManager
FileManager
SearchEngine
ReportManager
```

Total: **12+ classes**

---

# 📂 Project Structure

```
Library-Management-System
│
├── src
├── include
├── data
└── README.md
```

---

# ▶️ How to Run

Compile the project:

```
g++ src/*.cpp -o library
```

Run the program:

```
./library
```

---

# 📊 Example Menu

### Admin Menu

```
1 Add Book
2 View Books
3 Register Student
4 Borrow Book
5 Return Book
6 View Transactions
7 Search Book
8 Show Report
9 Delete Book
10 Exit
```

### Student Menu

```
1 View Books
2 Search Book
3 Borrow Book
4 Return Book
5 Exit
```

---

# 🎯 Learning Outcome

This project demonstrates how **Object-Oriented Programming, Data Structures, File Handling, and basic authentication** can be combined to build a modular and scalable application.

---

# 👨‍💻 Author

Sumanth G
