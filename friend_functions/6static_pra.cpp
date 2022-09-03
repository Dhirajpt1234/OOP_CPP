// student admission system

#include <bits/stdc++.h>
using namespace std;
class Student
{
    int rollNo;

public:
    static int regNo;
    Student()
    {
        regNo++;
        rollNo = regNo;
    }

    int getRollNo()
    {
        return rollNo;
    }
};

int Student::regNo = 0;

int main()
{
    Student s1;
    cout << s1.regNo << endl
         << s1.getRollNo() << endl;

    Student s2;
    cout << s2.regNo << endl
         << s2.getRollNo() << endl;

cout<<"-----------------";
    cout<<Student::regNo<<endl;//getRollNo()::Student<<endl;

    return 0;
}