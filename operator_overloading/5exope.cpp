#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    Complex(Complex &c)
    {
        real = c.real;
        img = c.img;
    }

    friend ostream &operator<<(ostream &o, Complex &c);
    friend istream &operator>>(istream &i, Complex &c);
};

istream &operator>>(istream &i, Complex &c)
{
    cout << "Enter the real part : ";
    i >> c.real;
    cout << "Enter the imaginary part : ";
    i >> c.img;

    return i;
}

ostream &operator<<(ostream &o, Complex &c)
{
    o << c.real << " + i" << c.img;
    return o;
}
int main()
{
    Complex c1;
    cin >> c1;

    cout << c1;

    return 0;
}