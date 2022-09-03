#include <bits/stdc++.h>
using namespace std;
class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;

    int parentFun()
    {
        return a + b + c;
    }
};

class Child : private Parent
{
    int fun()
    {
        // return a + b + c;  //here a is not accesible as it is private in Parent
    }
};

class Grandchild : protected Child
{
    int grandFun()
    {
        // return a + b + c;  // a , b , c are protectes in child 
    }
};

int main()
{
    Grandchild g;
    g.a = 10;
    g.b = 20;
    g.c = 30;

    return 0;
}