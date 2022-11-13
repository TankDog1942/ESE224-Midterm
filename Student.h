#include "Book.h"

using namespace std;

class Student {
private:
    string username, password;
    static int maxCopies, maxBorrowPeriod;
    vector<Book> copies, borrows;
public:
    Student();
    Student(string u, string p);
    string getusername();
    string getpassword();
    int getmaxcopies();
    int getmaxborrowperiod();
    vector<Book> getcopies();
    vector<Book> getborrows();
    void setusername(string a);
    void setpassword(string a);
    void borrowbooks(int id);
    void returnbooks(int id);
    void requestCopy(long int isbn, string title, string author, string category);
    void deleteCopy(int id);
    void operator <<( Student& s);
    Student operator >>( Student& s);
};
