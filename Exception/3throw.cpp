#include <bits/stdc++.h>
using namespace std;

class MyEx : public exception
{
};

int division(int x, int y) //throw(myEx)
{
    // if (y == 0)
    // {
    //     throw 1;
    // }

    // if (y == 0)
    // {
    //     throw string("hiii this is a error");
    // }
    if (y == 0)
    {
        throw MyEx();
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
    catch (MyEx e)
    {
        cout << "Something went wrong ! ";
    }

    return 0;
}