#include <iostream>
using namespace std;
double Böyük_Ədəd(double a,double b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    double x,y;
    cout<<"Ədədləri daxil edin :";
    cin>>x>>y;
    cout<<"Böyük ədəd "<<Böyük_Ədəd(x,y);
    }