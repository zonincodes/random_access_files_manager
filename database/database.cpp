#include <iostream>
#include <student/student.h>
#include <personal/personal.h>
#include "database.h"

template<class T>
Database<T>::Database(){

}

template<class T>
void Database<T>::add(T &d){
    database.open(fName, ios::in | ios::out | ios::binary);
    database.seekp(0, ios::end);
    d.writetoFile(database);
    database.close();
}

template<class T>
void Database<T>::modify(const T &d){
    T tmp;
    database.open(fName, ios::in | ios::out | ios::binary);
    while (!database.eof()){
        tmp.readFromFile(database);
        if (tmp == d){// overloaded ==
            cin >> tmp; // overloaded >>
            database.seekp(-d.size(), ios::cur);
            tmp.writeToFile(database);
            database.close();
            return;
        }
    }
    database.close();
    cout << "The record to be modified is not in the database \n";
}

template<class T>
bool Database<T>::find(const T &d){
    T tmp;
    database.open(fName, ios::in | ios::binary);
    while(!database.eof()){
        tmp.readFromFile(database);
        if(tmp == d){ // overloaded ==
            database.close();
            return true;
        }
    };
    database.close()
    return false;
}