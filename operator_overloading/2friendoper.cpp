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
    void getComplex()
    {
        cout << real << " +i " << img << endl;
    }
    friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2)
{

    Complex t;
    t.real = c1.real + c2.real;
    t.img = c1.real + c2.img;

    return t;
}
int main()
{
    Complex s1(10, 5);
    Complex s2(5, 2);

    Complex s3 = s1 + s2;

    s3.getComplex();
    return 0;
}