#include <bits/stdc++.h>
using namespace std;
class Base
{

    int length;
    int breadth;

public:
    Base()
    {
        cout << "This is the dafult con of Base class" << endl;
    }
    Base(int x)
    {
        cout << "param con of Base class" << x << endl;
    }
};

class Derived : public Base
{
    int height;

public:
    Derived()
    {
        cout << "default con of derived class" << endl;
    }
    Derived(int a)
    {
        cout << "param con of derived class" << a << endl;
    }

    Derived(int x, int a) : Base(x)
    {
        cout << "param con of derived"
             << " " << a << ' ' << x;
    }

    // aisa nahi chalta
    //  Derived (int y):Base(y)
    //  {
    //      cout<<"Second param of Base "<<endl;
    //  }
};

int main()
{

    Derived d(10, 5);
    cout << "\n";
    // Derived s(10);

    return 0;
}