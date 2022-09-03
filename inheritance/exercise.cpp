#include <bits/stdc++.h>
using namespace std;

class Employee
{
    string name;
    int employeeId;

public:
    Employee() { cout << "initiate the object with info plz"; }
    Employee(string n, int id)
    {
        name = n;
        employeeId = id;
    }
    Employee(Employee &e)
    {
        name = e.name;
        employeeId = e.employeeId;
    }

    string getname() { return name; }
    int getid() { return employeeId; }
};

class Parttime : public Employee
{
    int dailyWage;

public:
    Parttime() { cout << "enter the full credentials"; }
    Parttime(string n, int id, int dw) : Employee(n, id)
    {
        dailyWage = dw;
    }
    Parttime(Parttime &p) : Employee(p)
    {
        dailyWage = p.dailyWage;
    }

    int getWage() { return dailyWage; }
};

class FullTime : public Employee
{
    int salary;

public:
    FullTime()
    {
        cout << "enter the full credentials";
    }
    FullTime(string n, int id, int sl) : Employee(n, id)
    {
        salary = sl;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    FullTime a("Dhiraj ", 1, 5000);
    Parttime b("Suraj", 2, 10000);

    cout << a.getname() << " has salary as " << a.getSalary() << endl;
    cout << b.getname() << " has daily wage as " << b.getWage() << endl;

    return 0;
}