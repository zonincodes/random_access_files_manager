#ifndef DATABASE
#define DATABASE

#include <iostream>
#include <fstream>
template <class T>
class Database
{
public:
    Database();
    void run();

private:
    std::fstream database;
    char fName[20];
    std::ostream &print(std::ostream &);
    void add(T &);
    void modify(const T &);
    bool find(const T &);
    friend std::ostream &operator<<(std::ostream &out, Database &db)
    {
        return db.print(out);
    }
};

#endif