#include "../include/SearchEngine.h"

void SearchEngine::indexBooks(vector<Book>& books){

    bookIndex.clear();

    for(Book &book : books){

        bookIndex[book.getBookID()] = book;
    }
}

Book* SearchEngine::searchBook(int id){

    if(bookIndex.find(id) != bookIndex.end()){

        return &bookIndex[id];
    }

    return nullptr;
}