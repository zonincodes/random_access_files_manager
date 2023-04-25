#ifndef DATABASE_H
#define DATABASE_H


template <class T>
class Database
{
public:
    Database();
    void run();

private:
    fstream database;
    char fName[20];
    ostream &print(ostream &);
    void add(T &);
    void modify(const T &);
    bool find(const T &);
    friend ostream &operator<<(ostream &out, Database &db)
    {
        return db.print(out);
    }
};

#endif