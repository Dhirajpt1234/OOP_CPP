#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream infile;
    infile.open("file2.txt");
    string name, middle, last;

    infile >> name;
    infile >> middle;
    infile >> last;

    cout << name << endl;
    cout << middle << endl;
    cout << last << endl;

    return 0;
}


