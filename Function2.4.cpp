#include <iostream>
using namespace std;
int Ədəd(int a){
    if(a%2==0){
        cout<<"Cütdür ";
        return a;
    }
    else{
        cout<<"Təkdir ";
        return a;
    }
}
int main(){
    int x;
    cout<<"Ədədi daxil edin :";
    cin>>x;
    cout<<"Ədəd "<<Ədəd(x);
}