#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Rectangle(int l, int b)
    // {
    //     // this refer to object and this->length refers to length of that object
    //     breadth = b;
    //     length = l;
    // }

    Rectangle(int length, int breadth)
    {
        // this refer to object and this->length refers to length of that object
        this->breadth = breadth;
        this->length = length;
    }
    Rectangle(Rectangle &r)
    {
        // this refer to object and this->length refers to length of that object
        this->breadth = breadth;
        this->length = length;
    }
};
int main()
{
    Rectangle r1(10, 5);
    Rectangle *r2;
    r2 = new Rectangle(r1)

        ;
    delete r2;

    return 0;
}
