#include <bits/stdc++.h>
using namespace std;

class Outer
{
public:
    int a = 10;
    static int b;

    void fun()
    {
        i.display();
    }

    class Innner
    {
    public:
        void display()
        {
            cout << "Display of Inner class!" << endl;
            // cout<<Outer::a<<endl; //This is not accessible caz inner classes can access only static members
            cout << Outer::b << endl;
        }
    };
    Innner i;
};

int Outer ::b = 40;

int main()
{
    Outer o;
    // o.i.display();
    o.fun();

    return 0;
}