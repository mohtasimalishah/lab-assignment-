
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int rollNumber;
    float gpa;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter details of Student " << i << endl;

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter GPA: ";
        cin >> gpa;

        cin.ignore();

        cout << endl;
    }

    return 0;
}

