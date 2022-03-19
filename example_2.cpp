#include<iostream>
using namespace std;
class part{

private:
    int modelno;int partno;float cost;

    public:
 void setpart(int mn, int pn,float c){
     modelno=mn;
     partno=pn;
     cost=c;

 }
 void showpart(){
     cout<<"modle no======="<<modelno<<endl;
     cout<<"parts====="<<partno<<endl;
     cout << "cost $=======" << cost << endl;
 }
};

int main(){
    part p1;
    p1.setpart(6655,373,217.55f);
    p1.showpart();

    return 0;
}