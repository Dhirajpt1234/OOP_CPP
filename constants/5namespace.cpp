#include <bits/stdc++.h>
using namespace std;

namespace first
{
    void fun()
    {
        cout << "fun one" << endl;
    }
}

namespace second
{
    void fun()
    {
        cout << "fun two" << endl;
    }
}

using namespace first; // to set is as by default.

int main()
{
    second ::fun();

    return 0;
}