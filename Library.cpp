//include headers and libraries
#include <iostream>
#include <string>
#include "Library.h"
using namespace std;


//implement class functions
//Using the provided header file Library.h, write a library class. The class has functions to add a book, remove a book, and print all books. The library can hold at most 10 books. Refer to the header file for the implementation details. Write your class implementation in the file Library.cpp. You also need to write a program that creates a Library object and prompts for one of the following commands: a bookName //add the book named bookName to the library if not already existing and //if there is availability r bookName //remove the book bookName if it exists in the library p //print the library contents q //quit the program Your program should show messages if it cannot successfully add or remove a book. You can assume that the input command is always valid, and the book name always consists of a single word.

//constructor
//creates a library with no books
Library::Library(){
    for(int i = 0; i < 10; i++){
        books[i] = "";
    }
}

//Adds the given book to the library and returns zero
//returns false if the book already exists or if the library
//  already has 10 books
bool Library::addBook(string bookName){
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            return false;
        }
    }
    for(int i = 0; i < 10; i++){
        if(books[i] == ""){
            books[i] = bookName;
            return true;
        }
    }
    return false;
}

//Removes the given book name from the library by setting the
//  corresponding string to "", and returns true
//returns false if the library does not have the given book
bool Library::removeBook(string bookName){
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            books[i] = "";
            return true;
        }
    }
    return false;
}

//prints the book names
void Library::print(){
    for(int i = 0; i < 10; i++){
        if(books[i] != ""){
            cout << books[i] << endl;
        }
    }
}


