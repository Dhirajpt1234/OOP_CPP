// compare the first program and second program for better understanding.

#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int size;

public:
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[size];
    }
    void push(int x);
    int pop();
};

void Stack::push(int x)
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

int Stack::pop()
{
    int x = 0;
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

    Stack s(5);

    s.push(5);
    s.push(10);

    cout << s.pop() << endl;

    return 0;
}