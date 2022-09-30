#include <iostream>
using namespace std;
int F[10];

int Func(int n){
    // int static F[10];
    if(n<=1) return n;
    else{
    if(F[n-2]==-1) F[n-2]=Func(n-2);
    if(F[n-1]==-1) F[n-1]=Func(n-1);
    return Func(n-2)+Func(n-1);}

}

int main(){
    for(int i=0;i<10;i++){
        F[i]=-1;
    }
    cout<<Func(3);
    return 0;
}