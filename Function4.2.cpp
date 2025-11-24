#include <iostream>
using namespace std;
int Say(int a){
    int c=0;
    while (a>0){
        c=c+1;
        a=a/10;
    }
    return c;
}
int main(){
    int x;
    cout<<"Ədədi daxil edin :";
    cin>>x;
    cout<<"Ədədin Rəqəmlərinin Sayı :"<<Say(x);
}