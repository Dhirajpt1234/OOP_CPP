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
    Derived d;
    d.display();

    return 0;
}