#include <iostream>
using namespace std;
int Bölünənlər(int b){
    for (int i=1;i<99;++i){
        b=i;
        if (i%3==0 && i%7==0){
             cout<<i<<endl;
        }
    }
    return b;
}
int main (){
    int a;
    cout<<"Bölünənlər"<<Bölünənlər(a);
}