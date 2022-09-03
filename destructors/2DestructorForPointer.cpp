#include <bits/stdc++.h>
using namespace std;

class Test
{
    int *p;
    int size;

public:
    Test(int s)
    {
        size = s;
        cout << "Object is created \n";
        p = new int[size];
    }

    ~Test()
    {
        cout << "Object is destroyed!\n";
        delete[] p;
    }
};

int main()
{

    Test *t;
    t = new Test(10);

    delete t;
    cout << "\nLine after delete";

    return 0;
}