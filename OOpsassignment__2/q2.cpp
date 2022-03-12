#include <iostream>
#include <iomanip>
#include <string>
#include<math.h>
#include<conio.h>
// question2 
// ehsan is cooding
using namespace std;
const char ESC = 27;
const double TOLL = 0.5;

class tollBoth
{
private:
    unsigned int totalCars;
    double totalCash;

public:
    tollBoth() : totalCars(0), totalCash(0.0)
    {
    }
    void payingCar()
    {
        totalCars++;
        totalCash += TOLL;
    }
    void nopayingCar()
    {
        totalCars++;
    }

    void getCar()
    {



        cout<<"\n CArs==="<<totalCars<<","<<"\n CASh=="<<totalCash<<endl;
    }
    //     cout << "\n press 0 for each nonpaying cars" << endl;
    //     cout<<"\n\n press 1 for each paying car "<<endl;
    //         cout<<"or pres esc to exit program" << endl;
    // }
};

int main(){

    tollBoth both1;
    char ch;
    cout << "\n press 0 for each nonpaying cars" << endl;
    cout<<"\n\n press 1 for each paying car "<<endl;
    cout<<"or pres ESC to exit program" << endl;
    cout << endl;
    do
    {
        ch == getch();
        if (ch == 0)
            both1.nopayingCar();
        if (ch == '1')
            both1.payingCar();
        
      }while(ch!=ESC);
      both1.getCar();

      return 0;
     }

     
     