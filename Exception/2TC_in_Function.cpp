#include <bits/stdc++.h>
using namespace std;

int division(int x, int y)
{
    if (y == 0)
    {
        throw 1;
    }

    return x / y;
}
int main()
{
    int x, y, z;
    cout << "Enter the value of x and y : ";
    cin >> x >> y;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (int e)
    {
        cout << "Something went wrong ! " << e;
    }

    return 0;
}