#include <bits/stdc++.h>
using namespace std;

template <class T>
class Number
{
    T a;
    T b;

public:
    Number(T a, T b)
    {
        this->a = a;
        this->b = b;
        cout << " a  = " << a;
        cout << " b = " << b;
    }
    T add();
    T sub();
    T multi();
    T div();
};

template <class T>
T Number<T>::add()
{
    return a + b;
}

template <class T>
T Number<T>::sub()
{
    return a - b >= 0 ? a - b : b - a;
}
template <class T>
T Number<T>::div()
{
    return a / b;
}

template <class T>
T Number<T>::multi()
{
    return a * b;
}

int main()
{
    Number<int> n(5, 3);
    cout << "\naddition is : " << n.add();
    cout << "\nsubtraction is : " << n.sub();
    cout << "\ndiv is : " << n.div();
    cout << "\nmultiplication is : " << n.multi();

    Number<float> n1(12, 5);
    cout << "\naddition is : " << n1.add();
    cout << "\nsubtraction is : " << n1.sub();
    cout << "\ndiv is : " << n1.div();
    cout << "\nmultiplication is : " << n1.multi();
    return 0;
}
