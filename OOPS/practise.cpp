#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;
    int rollNo;
    int mathMarks;
    int chemMarks;
    int bioMarks;

public:
    Student();
    Student(string name, int rollNo, int mathMarks, int bioMarks, int chemMarks);
    Student(Student &s);

    void setName(string name);
    void setRollNo(int rollNo);
    void setMathMarks(int mathMarks);
    void setBioMarks(int bioMarks);
    void setChemMarks(int chemMarks);

    string getName();
    int getRollNo();
    int getmath();
    int getbio();
    int getchem();

    int total();

    int grade();

    ~Student();
};

int main()
{
    Student s("Dhiraj", 22344, 100, 100, 100);
    cout << s.total() << endl;
    cout << s.grade() << endl;
    return 0;
}

Student ::Student()
{
    name = "Student_name";
    rollNo = 1;
    mathMarks = 35;
    bioMarks = 35;
    chemMarks = 35;
}

Student ::Student(string name = "student_name", int rollNo = 1, int mathMarks = 35, int bioMarks = 35, int chemMarks = 35)
{
    setName(name);
    setRollNo(rollNo);
    setMathMarks(mathMarks);
    setBioMarks(bioMarks);
    setChemMarks(chemMarks);
}

Student ::Student(Student &s)
{
    name = s.name;
    rollNo = s.rollNo;
    mathMarks = s.mathMarks;
    bioMarks = s.bioMarks;
    chemMarks = s.chemMarks;
}

void Student ::setName(string name) { this->name = name; }
void Student ::setRollNo(int rollNo) { this->rollNo = rollNo; }
void Student ::setMathMarks(int mathMarks) { this->mathMarks = mathMarks; }
void Student ::setBioMarks(int bioMarks) { this->bioMarks = bioMarks; }
void Student ::setChemMarks(int chemMarks) { this->chemMarks = chemMarks; }

string Student ::getName() { return name; }
int Student ::getRollNo() { return rollNo; }
int Student ::getmath() { return mathMarks; }
int Student ::getbio() { return bioMarks; }
int Student ::getchem() { return chemMarks; }

int Student ::total()
{
    return (mathMarks + bioMarks + chemMarks);
}

int Student ::grade()
{
    int totalMarks = total();
    if (totalMarks / 3 >= 35)
    {
        cout << "Student is passed!";
    }
    else
    {
        cout << "Student is not passed!";
    }
    return (mathMarks + bioMarks + chemMarks);
}