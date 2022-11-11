#include <iostream>
using namespace std;

int SIZE=10;

int Hash(int key){
    return key % SIZE;
}

int QuadProb(int H[],int key){
    int idx = Hash(key);
    int i = 0;
    while (H[(idx+i*i) % SIZE] != 0){
        i++;
    }
    return (idx + i*i) % SIZE;
}

void Insert(int H[], int key){
    int idx = Hash(key);
 
    if (H[idx] != 0){
        idx = QuadProb(H, key);
    }
    H[idx] = key;
}

int Search(int H[], int key){
    int idx = Hash(key);
    int i = 0;
    while (H[(idx+i*i) % SIZE] != key){
        i++;
        if (H[(idx + i*i) % SIZE] == 0){
            return -1;
        }
    }
    return (idx + i*i) % SIZE;
}

int main(){
    int ch,data;
    int arr[10]={0};
    
    cout<<"Array initially will be empty"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"1)Display hash table"<<endl;
    cout<<"2)Enter element"<<endl;
    cout<<"3)Search element"<<endl;
    cout<<"4)Exit"<<endl;
    do{
        cout<<"Enter your choice : "<<endl;
        cin>>ch; 
        switch(ch){
            case 1: 
            for(int i=0;i<10;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
            break;

            case 2:
            cout<<"Enter element to add:";
            cin>>data;
            Insert(arr,data);
            cout<<"Element has been added"<<endl;
            break;

            case 3:
            cout<<"Enter element to search:";
            cin>>data;
            cout<<data<<" is on index "<<Search(arr,data)<<endl;
            break;

            case 4: cout<<"Exit"<<endl;
            break;

            default: cout<<"Invalid choice"<<endl;    
        }
    }while(ch!=4);
    return 0;    
}
