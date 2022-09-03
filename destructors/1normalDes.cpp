#include <bits/stdc++.h>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Object is created \n";
    }

    ~Test()
    {
        cout << "Object is destroyed!\n";
    }
};

int main()
{
    Test t;

    return 0;
}