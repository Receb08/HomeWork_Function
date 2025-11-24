#include <iostream>
using namespace std;
int il(int a){
    if ((a%4==0 && a%100!=0) || a%400==0){
        cout<<"Tam ildir ";
        return a;
    }
    else{
        cout<<"Tam il deyil ";
        return a;
    }
}
int main (){
    int x;
    cout<<"Ili daxil edin :";
    cin>>x;
    cout<<"Il "<<il(x);
}