#include <iostream>
using namespace std;

int hano(int n,int A,int B,int C){
    if(n>0){
    hano(n-1,A,C,B);
    cout<<A<<"to"<<C<<endl;
    hano(n-1,B,A,C);
    }

   }
int main(){
    hano(3,1,2,3);
    return 0;
}

