#include <iostream>
using namespace std;

int F(int n){
    if(n<=1)return n;
    return F(n-2)+F(n-1); 
}
int main(){
    int A;
    A=F(1);
    cout<<A;
    return 0;
}