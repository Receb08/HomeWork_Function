#include <iostream>
using namespace std;
double Cəm(double c=0){
    for (int i=1;i<100;++i){
        c=c+i;
    }
    return c;
}
int main(){
    int s=0;
    cout<<"Cəm "<<Cəm(s);
}