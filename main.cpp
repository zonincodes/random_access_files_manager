#include <iostream>
#include <database.h>
#include <personal.h>
#include <student.h>
int main(){
    Database<Personal>().run();
    // Database<Student>().run();
    return 0;
}