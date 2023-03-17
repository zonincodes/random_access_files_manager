#include <iostream>
#include <database.cpp>
#include <personal.h>
#include <student.h>
int main(){
    // Database<Personal>().run();
    Database<Student>().run();
    return 0;
}