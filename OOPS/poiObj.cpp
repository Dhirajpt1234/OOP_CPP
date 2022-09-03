#include <bits/stdc++.h>
using namespace std;

class Rectangle{
    public:

    int length;
    int breadth;

    int area()
    {
        return (length*breadth);
    }

    int perimeter()
    {
        return (2*(length + breadth));
    }

};
int main()
{
    Rectangle r;
    Rectangle *ptr = &r;

    Rectangle *q = new Rectangle ;
    Rectangle *p = new Rectangle() ;


    r.length = 15;
    r.breadth = 10;

    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;

    cout<<ptr->area()<<endl;

    q->length = 25;
    q->breadth = 30;

    cout<<q->area()<<endl;
    cout<<q->perimeter()<<endl;


    p->length = 40;
    p->breadth = 30 ;

    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;
    return 0;
}