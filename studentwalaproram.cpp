#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class student
{
public:
    int rollno;
    string name;
    float cgpa;

    static void setName(student *, int);
    static void getName(student *, int);
    static void getNamebystudentname(student *, int);
    static void sort(student *, int);
};
void student::sort(student *T, int n)
{
    student temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (T[i].name > T[j].name)
            {
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;
            }
        }
    }
}
//
void student::setName(student *T, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "input rollno----";
        cin >> T[i].rollno;
        cout << "input  name----";
        cin >> T[i].name;
        cout << "input cgpa-------------";
        cin >> T[i].cgpa;
    }
}
//
void student::getName(student*T, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "rollno-----------" << T[i].rollno<< endl;
        cout << "name-----------" << T[i].name << endl;
        cout << "cgpa---------" << T[i].cgpa << endl;
    }
}
//
void student::getNamebystudentname(student *T, int n)
{
    string S;
    cout << "input--- student name---" << endl;
    cin >> S;
    for (int i = 0; i < n; i++)
    {
        if (T[i].name == S)
        {
            cout << "rollno-----------" << T[i].rollno << endl;
            cout << "rollno name-----------" << T[i].name << endl;
            cout << "cgpa----------" << T[i].cgpa << endl;
        }
    }
}
//
int main()
{
    int n;
    cout << "INput limit of students--------------------" << endl;
    cin >> n;
    student *T = new student[n];
    student::setName(T, n);
    student::getName(T, n);
    student::getNamebystudentname(T, n);
    student::sort(T, n);
    student::getName(T, n);

    return 0;
}