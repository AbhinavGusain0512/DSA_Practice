#include <iostream>
using namespace std;

// int power(int m,int n){
//     if(m==0){
//         // cout<<"error"<<endl;
//         return 0;
//     }
//     if(n==0) return 1;
//     if(m>0) return (power(m,n-1))*m;
// }

int Ipower(int m,int n){
    if(n==0) return 1;
    if(n%2==0) return Ipower(m*m,n/2);
    else return m*(Ipower(m*m,(n-1)/2));
    
}

int main(){
    int B,P;
    cout<<"Enter base and power respectively: ";
    cin>>B;
    cin>>P;
    cout<<B<<" race to the power "<<P<<" is "<<Ipower(B,P);

}