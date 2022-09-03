#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int real;
    int img;

    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;

        return temp;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(5, 6);
    Complex c3;

    c3 = c1 + c2;
    cout << c3.real << " +" << c3.img;
    return 0;
}