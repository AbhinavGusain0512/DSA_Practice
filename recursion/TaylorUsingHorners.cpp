#include <iostream>
using namespace std;

double e(int x,int n){
    static double s;
    if(n==0) return s;
    s=1+x*s/n;
    return e(x,n-1);

    }


int main(){
    double k;
    k=e(2,10);
    cout<<k;
    return 0;
}