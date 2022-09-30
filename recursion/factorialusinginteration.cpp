#include <iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;

    }
    return f;
}
int main(){
    int N;
    cout<<"Enter N:";
    cin>>N;
    cout<<"Factorial of N is "<<fact(N);
    return 0;
}