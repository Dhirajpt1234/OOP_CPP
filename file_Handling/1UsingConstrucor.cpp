#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // using constructor --> one file only.
    // ofstream outfile("file.txt");
    // string name = "dhiraj \n";
    // outfile << name;
    // int cost = 810;

    // outfile << cost;
    // outfile.close();

    string name;
    int cost;

    ifstream infile("file1.txt");
    infile >> name;
    infile >> cost;

    cout << name << ' ' << cost;
    return 0;
}