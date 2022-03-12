#include<iostream>
using namespace std;
/*Create a class angle that includes three member variables: an int for degrees,
 a float for minutes, and a char for the direction letter (N, S, E, or W). 
 This class can hold either a latitude variable or a longitude variable. 
 Write one member function to obtain an angle value (in degrees and minutes) and a direction from the user,
  and a second to display the angle value in 179°59.9’ E format. Also write a three-argument constructor.
   Write a main() program that displays an angle initialized with the constructor, and then, within a loop,
    allows the user to input any angle value, and then displays the value. 
    You can use the hex character constant ‘\xF8’, which usually prints a degree (°) symbol.

Expert's answer*/
class Angle
{
    int degrees;
    float minutes;
    char direction;

public:
    Angle(int deg, float min, char dir) : degrees(deg), minutes(min), direction(dir) {}
    void getpos()
    {
        cout << "Input degrees: ";
        cin >> degrees;
        cout << "Input minutes: ";
        cin >> minutes;
        do
        {
            cout << "Input direction: ";
            cin >> direction;
        } while (!(direction == 'E' || direction == 'W' || direction == 'N' || direction == 'S'));
    }
    void display()
    {
        cout << degrees << "\u00B0" << minutes << "\' " << direction << endl;
    }
};
int main()
{
    Angle angle(179, 59.9, 'E');
    angle.display();
    int choice;
    do
    {
        angle.getpos();
        angle.display();
        cout << "\nDo you want to enter a different angle?\n1. Yes\n2. Quit\n";
        cin >> choice;
    } while (choice == 1);
    return 0;
}