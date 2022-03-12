
/*Create an employee class. The member data should comprise an int for storing the employee number and a float for storing the employee’s compensation. Member functions should allow the user to enter this data and display it.
Write a main() that allows the user to enter data for three employees and display it.*/
#include "iostream"
using namespace std;

class employee

{
private:
    int E_num;
    float E_comp;

public:
    void input()
    {
        cout << "Enter Employee Number ";
        cin >> E_num;
        cout << "Enter Employee's Compensation ";
        cin >> E_comp;
    }
    void display()
    {
        cout << E_num << "\t\tRS,,,  " << E_comp << "\n";
    }
};
int main()
{
    employee E1, E2, E3;
    E1.input();
    E2.input();
    E3.input();
    cout << "\nNumber--------------------Compensation\n\n";
    E1.display();
    E2.display();
    E3.display();
    system("pause");
}
/*#include <iostream>
#include <conio.h>
using namespace std;
class employee{
 private:
  int emp_num;
  float emp_comp;
 public:
  void entData(){
   cout << "Enter Employee\'s Number ";
   cin >> emp_num;
   cout << "Enter Employee\'s Salary " ;
   cin >> emp_comp;
  }
  void display(){
   cout << "Employee\'s Number " << emp_num << endl;
   cout << "Enployee\'s Salary " << emp_comp << endl;
  }
};
int main(){
 employee emp1, emp2, emp3;
 cout << "Enter Data For Employee 1" << endl;
 emp1.entData();
 cout << "Enter Data For Employee 2" << endl;
 emp2.entData();
 cout << "Enter Data For Employee 3" << endl;
 emp3.entData();
 cout << "Total Data Entered Is" << endl;
 emp1.display();
 emp2.display();
 emp3.display();*/
