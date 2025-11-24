#include <iostream>
#include <cmath>
using namespace std;
double Sahə_Çevrə(double r){
    cout<<"Sahə "<<pow(M_PI,2)*r<<endl;
    cout<<"Çevrə ";
    return 2*M_PI*r;
}
int main(){
    int R;
    cout<<"Radius-u daxil edin :";
    cin>>R;
    cout<<"Sahə_Çevrə"<<endl;
    cout<<Sahə_Çevrə(R);
}