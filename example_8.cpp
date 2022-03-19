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
    void sgetdist()
    {
        cout << "Input  feet---";
        cin >> feet;
        cout << "Input inches---";
        cin >> inches;
    }

    void showdis()
    {
        cout << feet << "\'" << inches << '\"' << endl;

    }
    Sdistance add_dist(Sdistance);

};

//
Sdistance Sdistance::add_dist(Sdistance d2){
    Sdistance temp;
    temp.inches=inches+d2.inches;
    if(temp.inches>=12.0){
        temp.inches=12.0;
        temp.feet=1;

    }
    temp.feet += feet + d2.feet;
    return temp;

}
int main()
{
    Sdistance dis1,dis3;
    Sdistance dis2(11,6.25);
    dis1.sgetdist();
    dis3=dis1.add_dist(dis2);

    dis1.showdis();
    dis2.showdis();
    dis3.showdis();
    

    return 0;
}