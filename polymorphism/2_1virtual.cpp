#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
   void display()
    {
        cout << "fun of the base " << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "fun of the derived " << endl;
    }
};

int main()
{
    Base *p;
    p = new Derived();

    p->display();

    return 0;
}

//part 2 is also imp so plz have look on that also