#include<iostream>
using namespace std;

class Distance{
    private:
    int feet;
    float inches;
    public:
    void setdis(int ft,float in){
        feet = ft;
        inches = in;
    }void getdis(){
        cout << "\n input feet====";cin>>feet;
        cout << "\n input inches=====";
        cin >> inches;
        }

        void showdis(){
            cout << feet << "\'-" << inches << '\"';

        }
};
int main(){
    Distance dis1,dis2;
    dis1.setdis(11,6.25);
    dis2.getdis();
    dis1.showdis();
    dis2.showdis();

    return 0;
}