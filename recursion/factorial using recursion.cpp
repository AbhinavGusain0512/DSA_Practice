#include <iostream>
using namespace std;

int fact(int n){
    int f;
    if(n==0) return 1;
    return fact(n-1)*n;
}

int main(){
    int N;
    cout<<"Enter N:"<<endl;
    cin>>N;
    cout<<"Factorial of N is: "<<fact(N);
    return 0;
    
}