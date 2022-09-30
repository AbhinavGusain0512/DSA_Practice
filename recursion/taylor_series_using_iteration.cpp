#include <iostream>
using namespace std;


double tay(double P,double N){
    double F,Pow,T;
    T=1;
    F=1;
    Pow=1;
    for(double i=0;i<=N;i++){
        if(i==0){
            F=1;
}
        else{
        F=F*i;
        Pow=Pow*P;
        T=T+(Pow/F);}
    }
    return T;
}

int main(){
    double H;
    H=tay(6,6);
    cout<<H;
    
    return 0;
}