#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "fun1 of the Base " << endl;
    }
};

class Derived : public Base
{
public:
    void fun2()
    {
        cout << "fun2 of the Derived " << endl;
    }
};

int main()
{
    Base b;
    b.fun1();
    // b.fun2();
    cout << "---------" << endl;

    Derived d;
    d.fun1();
    d.fun2();

    cout << "---------" << endl;

    Base *p;
    p = new Derived();
    p->fun1();
    // p.fun2();

    cout << "---------" << endl;
    Derived *q;
    // q = new Base();  //this is not possible caz you can't assign a deriverd class pointer to the base class

    return 0;
}