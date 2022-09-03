#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
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

// Rectangel functions-
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


//------------------------------------------------------------//
//------------------------------------------------------------//

class Cuboid : public Rectangle
{
    int heigth;

public:
    // Constructors
    Cuboid(int l, int b, int h);
    Cuboid(Cuboid &c);

    void setHeight(int h);

    int getHeight();

    int volume();

    ~Cuboid();
};

Cuboid ::Cuboid(int l, int b, int h)
{
    setLength(l);
    setBreadth(b);
    setHeight(h);
}

Cuboid ::Cuboid(Cuboid &c)
{
    setLength(c.getLength());
    setBreadth(c.getBreadth());
    setHeight(c.getHeight());
}

void Cuboid ::setHeight(int h)
{
    if (h >= 0)
    {
        heigth = h;
    }
    else
    {
        heigth = 0;
    }
}

int Cuboid ::getHeight()
{
    return heigth;
}

int Cuboid::volume()
{
    return (getLength() * getBreadth() * getHeight());
}

Cuboid ::~Cuboid()
{
    cout << "Cuboid destroyed successfully!" << endl;
}

int main()
{
    Cuboid c1(5, 4, 8);
    cout << c1.getBreadth();

    return 0;
}