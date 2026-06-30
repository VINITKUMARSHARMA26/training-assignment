
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    float marks;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Roll No: ";
    cin >> s.rollNo;

    cout << "Enter Marks: ";
    cin >> s.marks;

    cout << "\nStudent Details\n";
    s.display();

    return 0;
}