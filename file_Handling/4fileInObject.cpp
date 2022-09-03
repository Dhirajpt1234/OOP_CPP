#include <bits/stdc++.h>
using namespace std;

class inv
{
    char name[10];
    int code;
    float cost;

public:
    void getData()
    {
        cout << "enter name =  ";
        cin >> name;
        cout << " Enter code : ";
        cin >> code;
        cout << " Enter cost : ";
        cin >> cost;
    }

    void putData()
    {
        cout << "\n Name : " << name;
        cout << "\n Code : " << code;
        cout << "\n Cost : " << cost;
    }
    


};
int main()
{
    inv item;
    fstream file;
    file.open("obj.DAT", ios::ate | ios::out | ios::in | ios::binary);
    file.seekg(0, ios::beg);

    cout << " \n Current cintents of the stock: \n";

    while (file.read((char *)&item, sizeof(item)))
    {
        item.putData();
    }
    // file.clear();

    cout << " add an item : \n";
    item.getData();

    return 0;
}
