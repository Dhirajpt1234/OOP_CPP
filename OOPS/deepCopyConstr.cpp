#include <bits/stdc++.h>
using namespace std;

class Test{
    int a;
    int *p;

    public:
    Test(int l)
    {
        a = l;
        p = new int[a];
    }

    Test(Test &t)
    {
        a = t.a;
        p = new int[a]; // here we cant write  " p = t.p "  , due to this , thsi p pointer will also point to the same array of t
        
    }
};

int main()
{

    Test t1(10);
    Test t2(t1);
    

    return 0;
}