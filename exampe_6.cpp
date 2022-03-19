#include <iostream>
#include <string>
#include <iomanip>
// concept of passing
using namespace std;
class Sdistance
{
    int feet;
    float inches;

public:
    Sdistance()
    {
        feet = 0;
        inches = 0;
    }
    Sdistance(int f, float i)
    {
        feet = f;
        inches = i;
    }
    void setName()
    {
        cout << "Input  feet---";
        cin >> feet;
        cout << "Input inches---";
        cin >> inches;
    }

    void Add(Sdistance x)
    {
        Sdistance result;
        result.feet = feet + x.feet;
        result.inches = inches + x.inches;
    }
    void Add(Sdistance x, Sdistance y)
    {
        feet = x.feet + y.feet;
        inches = x.inches + y.inches;
    }
    void getName()
    {
        cout << "feet--" << feet << endl;
        cout << "inches---" << inches << endl;
        cout << feet << "\"_" << inches << "\"_" << endl;
    }
};
int main()
{
    Sdistance d1, d2(2, 33), d3;
    d1.setName();
    d2.setName();
    d1.Add(d2);
    d3.Add(d1, d2);
    d3.getName();

    return 0;
}