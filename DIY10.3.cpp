#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int marks;
};

int main()
{
    Student s[50];
    int n;

    ofstream fout("student.txt");

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter name and marks: ";
        cin >> s[i].name >> s[i].marks;

        fout << s[i].name << " " << s[i].marks << endl;
    }

    fout.close();

    ifstream fin("student.txt");

    for (int i = 0; i < n; i++)
    {
        fin >> s[i].name >> s[i].marks;
    }

    int topper = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > s[topper].marks)
        {
            topper = i;
        }
    }

    cout << "\nTopper Details:" << endl;
    cout << "Name: " << s[topper].name << endl;
    cout << "Marks: " << s[topper].marks << endl;

    fin.close();

    return 0;
}