#include <bits/stdc++.h>
using namespace std;

class Base 
{
    int x= 10;
    public:
    void display() const
    {
       // x++;   due to const this fun can't change the data members of this class 
        cout<<x<<endl;
    }
};
int main()
{
    Base b;

    b.display();

    return 0;
}