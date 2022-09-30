#include <iostream>
using namespace std;

// int swap(int &a,int &b){
//     int temp;
//     temp=&a;
//     &a=&b;
//     &b=temp;

//     return 0;

// }
int main(){
    int arr[9]={7,4,9,5,0,1,3,4,5};

    //4 5 0 7 9 

    //temp = 5
    // idx = 3

    // for(i=0;i<10;i++){
    //     // int temp=0;
    //     if(arr[i]>=arr[i+1]){
    //         temp=arr[i];
    //         arr[i]=arr[i+1];
    //         arr[i+1]=arr[i];
        
    //     }
    // }return 0;

    //assuming the array is sorted 

    for(int i = 0 ; i < 9 ; i++){
        //do the swapping until in correct position
        int idx = i;
        cout << arr[i] << " ";
        while(idx - 1 >= 0 && arr[idx] < arr[idx-1]){
            cout << arr[idx] << " < " << arr[idx -1] << endl;
            int temp = arr[idx];
            arr[idx] = arr[idx-1];
            arr[idx-1] = temp;
            //next swapping
            idx--; 
        }
    }

    cout<<  endl;

    for(int i = 0 ; i < 9 ; i++){
        cout << arr[i] << " ";
    }
    

}

