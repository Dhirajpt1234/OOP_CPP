#include <bits/stdc++.h>
using namespace std;

class Test
{
private:
    int a;
    int b;

public:
    static int count; //declaring it as static member.

    Test()
    {
        a = 10;
        b = 20;
        count++;
    }
};

int Test ::count = 0; // ststic members must have to declare outside the class also

int main()
{
    Test t1;
    cout << t1.count << endl;
    Test t2;
    cout << t2.count << endl;
    Test t3;
    cout << t3.count << endl;

    cout << "-----------------" << endl;
    cout << Test::count << endl;  //we can access it like this also

    t1.count = 50; //changing value of t1.count and see below line
    cout<<t2.count<<endl; //showing value  of the t2.count 
    //it will give 50 , as the memory(count) is shared by all objects.

    return 0;
}