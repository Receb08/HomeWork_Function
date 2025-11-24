#include <iostream>
#include <cmath>
using namespace std;
int Ədədlər(int a,int b,int c){
    return (a+b+c)/3;
}
int main (){
    int x,y,z;
    cout<<"Ədədləri daxil edin :";
    cin>>x>>y>>z;
    cout<<"Ədədi orta "<<Ədədlər(x,y,z);
}