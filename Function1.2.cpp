#include <iostream>
using namespace std;
int Nəticə(int a,int b){
    cout<<(a+b)<<endl;
    cout<<(a-b)<<endl;
    cout<<(a*b)<<endl;
    return(a/b);
}
int main(){
    int x,y;
    cout<<"2 Ədəd daxil edin :";
    cin>>x>>y;
    cout<<"Nəticə:"<<endl;
    cout<<Nəticə(x,y);
}