#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int x = 10;

    // x = 30 ; //as x is now constant so we cant change it

    cout << x << endl;

    cout << "---------pointer to const( here data is locked)----------\n";

    int a = 10;

    const int *ptr = &a; // it is a constant poiter of int type.

    // ++*ptr;   //so we cant change the value of data through this pointer.

    a++; // but we can change the value of data by other method

    cout << *ptr << endl;

    cout << "---------pointer to const( here pointer is locked)----------\n";

    int b = 38;
    int c = 859;

    int *const q = &b;
    ++*q;

    // q = &c;   //as pointer is locked so we cant move it to another variable

    cout << "-pointer to const( here pointer and data is locked)-\n";

    int d = 389;
    int e = 839;

    const int * const poi = &d;

    //  ++*poi;
    //  poi = &e;



    return 0;
}