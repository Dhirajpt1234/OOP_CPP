#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "base constructor\n";
    }

    virtual ~Base()
    {
        cout << "base destructor\n";
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived Constructor\n";
    }
    ~Derived()
    {
        cout << "Derived destructor\n";
    }
};
int main()
{
    // Derived d;

    Base *p = new Derived();

    delete p;

    return 0;
}