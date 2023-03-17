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