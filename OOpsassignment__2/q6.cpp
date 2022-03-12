#include<iostream>
#include<string>
using namespace std;

class date
{
private:
    int month, day, year;
    char dummychar;

public:
    void getdate()
    {
        cin >> day >> dummychar >> month >> dummychar >> year;
    }
    void showdate() const
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};
class employee
{
private:
    enum etype
    {
        laborer,
        secretary,
        manager,
        accountant,
        executive,
        researcher
    };
    date d_hired;
    char c;

public:
    void getemploy()
    {
        cout << "Enter employee type (first letter only)\n";
        cout << "( i.e. laborer, secretary, manager, accountant, executive, researcher): ";
        cin >> c;
        cout << "Enter Date when the Employee was Hired ( DAY/MONTH/YEAR Format ): ";
        d_hired.getdate();
    }
    void putemploy()
    {
        switch (c)
        {
        case 'l':
        case 'L':
            cout << "\nEmployee Type is 'Laborer' and,\n";
            cout << "Date of Employement is: ";
            d_hired.showdate();
            break;
        case 's':
        case 'S':
            cout << "\nEmployee Type is 'Secretary' and,\n";
            cout << "Date of Employement is: ";
            d_hired.showdate();
            break;
        case 'm':
        case 'M':
            cout << "\nEmployee Type is 'Manager' and,\n";
            cout << "Date of Employement is: ";
            d_hired.showdate();
            break;
        case 'a':
        case 'A':
            cout << "\nEmployee Type is 'Accountant' and,\n";
            cout << "Date of Employement is: ";
            d_hired.showdate();
            break;
        case 'e':
        case 'E':
            cout << "\nEmployee Type is 'Executive' and,\n";
            cout << "Date of Employement is: ";
            d_hired.showdate();
            break;
        case 'r':
        case 'R':
            cout << "\nEmployee Type is 'Researcher' and,\n";
            cout << "Date of Employement is: ";
            d_hired.showdate();
            break;
        }
    }
};
int main(){
    employee emp1, emp2, emp3;
    emp1.getemploy();
    emp2.getemploy();
    emp3.getemploy();
    emp1.putemploy();
    emp2.putemploy();
    emp3.putemploy();
    system("pause");
}