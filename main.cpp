#include <iostream>
#include <fstream>
#include <student/student.h>
#include <database/database.h>
#include <personal/personal.h>

int main()
{
    // Database<Personal>().run();
    Database<Student> db;
    db.run();
    return 0;
}