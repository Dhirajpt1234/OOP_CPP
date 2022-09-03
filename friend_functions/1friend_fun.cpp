#include <bits/stdc++.h>
using namespace std;

class One
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend void fun(); // declaring the fun as friend of this class.
};

void fun()
{
    One o; // to access data members , we have to use them through object.
    o.a = 10;
    o.b = 20;
    o.c = 30;

    cout << " " << o.a << " " << o.b << " " << o.c << endl;
}
int main()
{
    fun();

    return 0;
}