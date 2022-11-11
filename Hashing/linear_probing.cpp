#include <iostream>
using namespace std;
int SIZE=10;

int hhash(int data){
    return data%SIZE;    //return hash function
}

int probe(int H[],int data){
    int index=hhash(data);
    int i=0;
    while(H[(index+i)%SIZE]!=0){
    i++;
    }

    return (index+1)%SIZE;
}

void insert(int H[],int data){
    int index=hhash(data);

    if(H[index]!=0){
        index=probe(H,data);
    }
    H[index]=data;
}
int search(int H[],int data){
    int index=hhash(data);
    int i=0;

    while(H[(index+i)%SIZE]!=data){
        i++;
    }

    return (index+i)%SIZE;
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
            insert(arr,data);
            cout<<"Element has been added"<<endl;
            break;

            case 3:
            cout<<"Enter element to search:";
            cin>>data;
            cout<<data<<" is on index "<<search(arr,data)<<endl;
            break;

            case 4: cout<<"Exit"<<endl;
            break;

            default: cout<<"Invalid choice"<<endl;    
        }
    }while(ch!=4);
    return 0;    
}

