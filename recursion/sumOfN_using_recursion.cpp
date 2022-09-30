#include <iostream>
using namespace std;

int Sum(int n){
    int i;
    
    if(n==0)
        return 0;
    return Sum(n-1)+n;}
        
    


int main(){
    int N,r;
    cout<<"ENter N:"<<endl;
    cin>>N;
    cout<<"The sum of N consecutive numbers is:";
    r=Sum(N);
    cout<<r<<endl;
    return 0;
    
}