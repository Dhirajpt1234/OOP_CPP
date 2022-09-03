// Innova Price

#include <bits/stdc++.h>
using namespace std;
class Innova
{

public:
    Innova()
    {
        cout << "Object is created ! " << endl;
    }
    static int price;
};
int Innova ::price = 20;
int main()
{
    Innova i1 , i2, i3;
    cout<<Innova::price; //for knowing the price i dont have to buy the car

    return 0;
}