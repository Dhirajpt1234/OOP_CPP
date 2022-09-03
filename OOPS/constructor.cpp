#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:

    // non-parameterized constructor
    //  Rectangle() //Try to write too many constructors . instead of it write constructor with default arguments.
    //  {
    //      length = 1 ;
    //      breadth = 1;
    //  }

    // parameterized constructor
    Rectangle(int l = 1, int b = 1)
    {
        setLength(l);
        setBreadth(b);
    }

    // copy constructor
    Rectangle(Rectangle &r)
    {
        setLength(r.length);
        setBreadth(r.breadth);
    }

    void setLength(int l)
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

    void setBreadth(int b)
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

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return (length * breadth);
    }

    int perimeter()
    {
        return (2 * (length + breadth));
    }
};
int main()
{

    Rectangle r1;
    cout<<"the area of r1(non-parameterized) is : "<<r1.area()<<endl;

    Rectangle r2(10,5);
    cout<<"the area of r2(parameterized) is : "<<r2.area()<<endl;

    Rectangle r3(r2);
    cout<<"The are of the r3(copied) is : "<<r3.area()<<endl;

    return 0;
}