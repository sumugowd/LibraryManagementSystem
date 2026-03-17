#ifndef SEARCHENGINE_H
#define SEARCHENGINE_H

#include<map>
#include<vector>
#include "Book.h"

using namespace std;

class SearchEngine{

    private:
        map<int, Book> bookIndex;

    public:
        
        void indexBooks(vector<Book>& books);

        Book* searchBook(int id);

};

#endif