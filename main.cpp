#include <iostream>
#include "database/database.h"
#include "personal/personal.h"
#include "student/student.h"
#include <fstream>
int main(){
    // Database<Personal>().run();
    Database<Student> db;
    db.run();
    return 0;
}