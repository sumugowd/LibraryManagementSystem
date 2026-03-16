#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <vector>
#include "Book.h"

using namespace std;

class FileManager {

    public:

        static void saveBooks(vector<Book> &books);

        static vector<Book> loadBooks();


};

#endif