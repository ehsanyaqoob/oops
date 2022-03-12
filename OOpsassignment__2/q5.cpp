#include <iostream>
#include <string.h>
using namespace std;

// defining struct date
struct date
{
    int month;
    int day;
    int year;
};

int main()
{
    // declaring d as date
    struct date d;
    // char input for date
    char input[20];
    // printing message
    cout << "Enter a date in the format(month/day/year) :";
    cin >> input;
    char *p = strtok(input, "/");
    d.month = atoi(p);
    p = strtok(0, "/");
    d.day = atoi(p);
    p = strtok(0, "/");
    d.year = atoi(p);
    cout << "Entered date is : ";
    cout << d.month << "/" << d.day << "/" << d.year;
    return 0;
}
