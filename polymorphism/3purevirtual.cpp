#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    virtual void start() = 0; //<- pure virtual funs
    // {
    //     cout << " car started " << endl;
    // }

    virtual void stop() = 0; //<- pure virtual funs
    // {
    //     cout << " car stopped !" << endl;
    // }
};

class Innova : public Car
{
public:
    void start()
    {
        cout << " Innova started " << endl;
    }

    void stop()
    {
        cout << " Innova stopped !" << endl;
    }
};

class Swift : public Car
{
public:
    void start()
    {
        cout << " Swift started " << endl;
    }

    void stop()
    {
        cout << " Swift stopped !" << endl;
    }
};

int main()
{
    Car *c;
    c = new Swift();

    c->start();
    c->stop();

    c = new Innova();

    c->start();
    c->stop();

    return 0;
}
