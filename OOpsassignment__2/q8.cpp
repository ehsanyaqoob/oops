/*create a class that includes a data member that holds a serial number for each object created from a class. 
that is the first object will be numbered 1 , the second 2 and so on.
 then each object is create , its constructor can examine this count member variable 
 to determine thhe approprate serial number for the new object.
add a member function that permits an object to report its own serial number .
 then the main() program that creates three objects and queries each one about its serial number. 
 they should respond i am object 2, and so on.*/
#include <iostream>
using namespace std;

class CounterClass
{
private:
    static int counter;
    int number;

public:
    CounterClass()
    {
        number = ++counter;
    };

    void tell_number()
    {
        cout << "I am object " << number << endl;
    };
};

int CounterClass::counter = 0;

int main()
{
    CounterClass obj1;
    CounterClass obj2;
    CounterClass obj3;
    obj1.tell_number();
    obj2.tell_number();
    obj3.tell_number();
    cin.get();

    return 0;
}
