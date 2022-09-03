#include <bits/stdc++.h>
using namespace std;

class One; // we have to declare the fun before the friend statement caz it won't recognize the one if we didn't declre it.
class Base
{
private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;

    friend One; //declaring the class as friend fun
};

class One
{
public:
    void display()
    {
        Base b;  //we can access members only through the object.
        cout << b.a << " " << b.b << " " << b.c;
    }
};
int main()
{
    One o;
    o.display();

    return 0;
}