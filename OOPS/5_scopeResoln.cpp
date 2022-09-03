#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    // constructors
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);

    // mutators
    void setLength(int l);
    void setBreadth(int b);

    // accesors
    int getLength();
    int getBreadth();

    // facillitators
    int area();
    int perimeter();

    // enquiry
    bool isSquare();

    // destructors
    ~Rectangle();
};

int main()
{
    Rectangle r1;
    cout << r1.area();

    return 0;
}
Rectangle ::Rectangle()
{
    length = 1;
    breadth = 1;
}
Rectangle ::Rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
}

// copy constructor
Rectangle ::Rectangle(Rectangle &r)
{
    setLength(r.length);
    setBreadth(r.breadth);
}

void Rectangle ::setLength(int l)
{
    if (l >= 0)
    {
        length = l;
    }
    else
    {
        length = 0;
    }
}

void Rectangle ::setBreadth(int b)
{
    if (b >= 0)
    {
        breadth = b;
    }
    else
    {
        breadth = 0;
    }
}

int Rectangle ::getLength()
{
    return length;
}
int Rectangle ::getBreadth()
{
    return breadth;
}

int Rectangle ::area()
{
    return (length * breadth);
}

int Rectangle ::perimeter()
{
    return (2 * (length + breadth));
}

bool Rectangle::isSquare()
{
    return (length == breadth);
}

Rectangle ::~Rectangle()
{
    cout << "Object destroyed successfully !";
}