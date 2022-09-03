#include <bits/stdc++.h>
using namespace std;
int main()
{

    fstream file;
    // file.open("modeFile.txt", ios::app);
    // cout << file.tellg() << ' ' << file.tellp() << endl;
    // file << "Suraj\n";
    // cout << file.tellg() << ' ' << file.tellp() << endl;
    // file.seekp(10);
    // file.seekg(10);
    // file << "Suraj\n";
    // cout << file.tellg() << ' ' << file.tellp() << endl;

    file.open("modeFile.txt", ios::app);
    cout << file.tellg() << ' ' << file.tellp() << endl;
    if (file.eof())
        cout << "\n at end\n";
    else
        cout << "NOT at end\n";
    string name;
    file >> name;
    cout << name << "hiii   " << endl;

    // file.open("mode3txt", ios::ate);
    // string jii = "HII jdhfksdj";
    // file << jii;

    return 0;
}