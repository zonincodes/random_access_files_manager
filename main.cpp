#include <iostream>
#include <fstream>
#include "personal/personal.h"
#include "student/student.h"
#include "database/database.h"
#include <fstream>
int main(){
    // Database<Personal>().run();
    Database<Student> db;
    // db.run();
    return 0;
}