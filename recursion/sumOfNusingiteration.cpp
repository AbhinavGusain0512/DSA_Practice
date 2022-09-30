#include <iostream>
using namespace std;

int sum(int n){
    int i,s;
    s=0;
    for(i=0;i<=n;i++){
        s=s+i;
    }
    return s;
}

int main(){
    int n,r;
    cout<<"enter n"<<endl;
    cin>>n;
    r=sum(n);
    cout<<"sum is"<<r<<endl;
    return 0;
}