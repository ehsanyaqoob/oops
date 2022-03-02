#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class mobile{
    public:
        string modle;
        string companyname;
        int price;

        static void setName(mobile *, int);
        static void getName(mobile *, int);
        static void getNamebyCompanyname(mobile *, int);
        static void sort(mobile *, int);
};
void mobile::sort(mobile*T,int n ){
    mobile temp;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(T[i].price>T[j].price){
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;

            }
        }
    }
}
//
void mobile::setName(mobile*T,int n){
    for (int i = 0; i < n;i++){
        cout << "input model no----";
        cin >> T[i].modle;
        cout << "input company name----";
        cin >> T[i].companyname;
        cout << "input price-------------";
        cin >> T[i].price;

    }
}
//
void mobile::getName(mobile*T,int n){
    for (int i = 0; i < n;i++){
        cout << "model-----------" << T[i].modle << endl;
        cout << "company name-----------" << T[i].companyname << endl;
        cout << "price----------" << T[i].price<< endl;
    }
}
//
void mobile::getNamebyCompanyname(mobile*T,int n){
    string S;
    cout << "input--- companyname---" << endl;
    cin >> S;
    for (int i = 0; i < n;i++){
        if(T[i].companyname==S){
            cout << "model-----------" << T[i].modle << endl;
            cout << "company name-----------" << T[i].companyname << endl;
            cout << "price----------" << T[i].price << endl;

        }
    }
}
//
int main(){
    int n;
    cout << "INput limit of mobiles------" << endl;
    cin >> n;
    mobile *T = new mobile[n];
    mobile::setName(T, n);
    mobile::getName(T, n);
    mobile::getNamebyCompanyname(T, n);
    mobile::sort(T, n);
    mobile::getName(T, n);

    return 0;

}