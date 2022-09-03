#include <bits/stdc++.h>
using namespace std;
class Rational
{
    int num;
    int den;

public:
    // CONSTRUCTORS:
    Rational(int num = 0, int den = 0)
    {
        this->num = num;
        this->den = den;
    }
    //Rational(Rational &r);

    friend Rational operator+(Rational r1, Rational r2);
    friend Rational operator-(Rational r1, Rational r2);
    //friend Rational operator*(Rational r1, Rational r2);
    friend Rational operator/(Rational r1, Rational r2);

    friend ostream &operator>>(ostream &o, Rational &r);
    friend ostream &operator<<(ostream &o, Rational &r);
};

// Rational ::Rational(Rational &r)
// {
//     num = r.num;
//     den = r.den;
// }

Rational operator+(Rational r1, Rational r2)
{
    
    Rational temp;
    temp.num = (r1.num * r2.den) + (r2.num * r1.den);
    temp.den = r1.den * r2.den;
    return temp;
}

Rational operator-(Rational r1, Rational r2)
{
    Rational temp;
    temp.num = (r1.num * r2.den) - (r2.num * r1.den);
    temp.den = r1.den * r2.den;
    return temp;
}
// Rational operator*(Rational r1, Rational r2)
// {
//     Rational temp;
//     temp.num = r1.num * r2.num;
//     temp.den = r1.den * r2.den;
//     return temp;
// }
Rational operator/(Rational r1, Rational r2)
{
    Rational temp;
    temp.num = r1.num * r2.den;
    temp.den = r1.den * r2.num;
    return temp;
}

ostream &operator<<(ostream &o, Rational &r)
{
    o << r.num << "/" << r.den;
    return o;
}

int main()
{
    Rational r1(3, 5) , r4,r5,r6,r7;
    Rational r2(5, 8);

    Rational r3 = r1 + r2;
    cout << r3<<endl;

    r4 = r1 - r2;
    cout << r4<<endl;

    r5 =  r2 - r1;
    cout <<r5<<endl;

    r6 =  r1 / r2;
    cout <<r6<<endl;
    

    return 0;
}
