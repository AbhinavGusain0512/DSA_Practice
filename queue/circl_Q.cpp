#include <iostream>
using namespace std;

int size=7;
int front=-1;
int rear=-1;
int arr[7];

void enqueue(){
    int x;
    
    if(front==-1 && rear==(size-1)){
        cout<<"Queue is full"<<endl;
    }
    

    else if((front)==(rear+1)%size){
        cout<<"queue is full !!"<<endl;
    }
    else{
        cout<<"element to insert: ";
        cin>>x;
        rear=(rear+1)%size;
        arr[rear]=x;
    }
}

void dequeue(){
    if(front==rear){
        cout<<"queue is empty"<<endl;
    }
    else{
        front=(front+1)%size;
        cout<<"element removed is "<< arr[front]<<endl;
    }
}

void display(){
    if(front==rear){
        cout<<"queue is empty"<<endl;
    }
    

    else{
        int y=front;
        while(y!=rear){
            y=(y+1)%size;
            cout<<" "<< arr[y] ;
            
            
        }
        cout<<endl;
    }
}

int main(){
    int ch;
    cout<<"1)Insert element to queue "<<endl;
    cout<<"2)Remove element from queue "<<endl;
    cout<<"3)Display elements of queue"<<endl;
    cout<<"4)Exit"<<endl;
    do{
        cout<<"enter ur choice: ";
        cin>>ch;
        switch(ch){
            case 1: enqueue();
            break;
            case 2 : dequeue();
            break;
            case 3 : display();
            break;
            case 4 : cout<<"exit"<<endl;
            break;
            default: cout<<"invalid input"<<endl;
        }
        
    }while(ch!=4);
    

    return 0;
}