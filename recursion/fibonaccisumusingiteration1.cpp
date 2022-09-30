#include <iostream>
using namespace std;

int fibo(int n){
    int a,b,F;
    a=1;
    b=1;
    F=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a;
        F=a+b;
        a=b;
        b=F;
        cout<<a<<endl;
        
        
    }
    return sum;
}

int main(){
    int Ans;
    Ans=fibo(20);
    // cout<<Ans;
    return Ans;
}