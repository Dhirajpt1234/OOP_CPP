#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    int c;

    try
    {
        if (y == 0)
        {
            throw 1;
        }
        c = x / y;
        cout << c << endl;
    }
    catch (int e)
    {
        cout << "Something went wrong ! \nError Code : " << e << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x = 10;
//     int y = 1;
//     int c;

//     try
//     {
//         if (y == 0)
//         {
//             throw 1;
//         }
//         else if (y == 1)
//             throw 'c';
//         else if (y == 2)
//             throw "fkfhkjhf";
//         else if (y == 100)
//             throw NULL;

//         c = x / y;
//         cout << c << endl;
//     }
//     catch (...)
//     {
//         cout << "catch all error\n";
//     }

//     return 0;
// }