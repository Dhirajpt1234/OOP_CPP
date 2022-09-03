#include <bits/stdc++.h>
using namespace std;
int add( const int x, int y)
{ 
    // ++x; no change as it is const in this fun.
    return x + y;
}
int main()
{
    int a = 834, b = 83849;
    int c = add(a, b);
    cout << c << endl;

    return 0;
}