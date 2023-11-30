//include headers and libraries
#include <iostream>
#include <string>
#include "Library.h"
using namespace std;



//main function
int main(){
    //create a library object
    Library library;
    //prompt for commands
    string command;
    string bookName;
    while(true){
        cin >> command;
        if(command == "a"){
            cin >> bookName;
            if(!library.addBook(bookName)){
                cout << "cannot add " << bookName << endl;
            }
        }else if(command == "r"){
            cin >> bookName;
            if(!library.removeBook(bookName)){
                cout << "cannot remove " << bookName << endl;
            }
        }else if(command == "p"){
            library.print();
        }else if(command == "q"){
            break;
        }
    }
    return 0;
}

