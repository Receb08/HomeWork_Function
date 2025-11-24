#include <iostream>
using namespace std;
double Dəqiqə_Saat(double a){
    cout<<"Dəqiqə "<<a/60<<endl;
    cout<<"Saat ";
    return a/3600;
}
int main (){
    double san;
    cout<<"Saniyəni daxil edin :";
    cin>>san;
    cout<<"Dəqiqə,Saat"<<endl;
    cout<<Dəqiqə_Saat(san);
}