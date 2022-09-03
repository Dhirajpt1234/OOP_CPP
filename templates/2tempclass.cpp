// compare the first program and second program for better understanding.

#include <bits/stdc++.h>
using namespace std;

template <class T> //****here is the change****
class Stack
{
private:
    T *arr;
    int top;
    int size;

public:
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new T[size];
    }
    void push(T x);
    T pop();
};

template <class T> //****here is the change****
void Stack<T>::push(T x)
{
    if (top >= (size - 1))
    {
        cout << "Staack is full";
    }
    else
    {
        top++;
        arr[top] = x;
    }
}

template <class T>
T Stack<T>::pop()
{
    T x = 0;
    if (top < 0)
    {
        cout << "Stack is empty";
    }
    else
    {
        x = arr[top];
        top--;
    }
    return x;
}

int main()
{

    Stack<int> s1(5); // as we are using the template for various data tupes , we have to mention the data type of after class name
    s1.push(5);
    s1.push(10);
    cout << s1.pop() << endl;

    Stack<float> s2(5);
    s2.push(3.3);
    s2.push(23.4);
    s2.push(984.23);
    cout << s2.pop() << endl;

    Stack<char> s3(5);
    s3.push('d');
    s3.push('s');
    s3.push('f');

    cout << s3.pop() << endl;
    cout << s3.pop() << endl;

    return 0;
}