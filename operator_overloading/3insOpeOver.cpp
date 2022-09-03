#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend Complex operator+(Complex c1, Complex c2);
    friend ostream &operator<<(ostream &o, Complex &c);
};

Complex operator+(Complex c1, Complex c2)
{
    Complex t;
    t.real = c1.real + c2.real;
    t.img = c1.real + c2.img;
    return t;
}

ostream &operator<<(ostream &o, Complex &c)
{
    o << c.real << " + i" << c.img << endl;
    return o;
}

int main()
{

    Complex c1(10, 5), c2(5, 3), c3;
    c3 = c1 + c2;

    cout << c1 << endl
         << c2 << endl
         << c3 << endl;
    return 0;
}






