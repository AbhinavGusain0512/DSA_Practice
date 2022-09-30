#include <iostream>
using namespace std;
  
  int size=20;
  int front=-1;
  int rear=-1;
  int arr[20];
  
  

  void enqueue(){
    int i;
    if(rear==(size-1))
    cout<<"queue is full"<<endl;
    
    // else if(rear==front){
    // rear=-1;
    // front=-1;}
    
    else{
    cout<<"enter element: ";
    cin>>i;
    rear++;
    arr[rear]=i;}
  }

  void dequeue(){
    if(rear==-1 && front==-1){
    cout<<"queue is empty"<<endl;}

    // else if(rear==front){
    // rear=-1;
    // front=-1;}

    else{
    front++;
    cout<<"element removed is: "<<arr[front]<<endl;
    }
    
  }

  void display(){
    if(rear==-1 && front==-1)
    cout<<"queue is empty"<<endl;

    else{
      cout<<"elements of queue are: "<<endl;
      for(int i=front+1;i<=rear;i++){
         cout<<arr[i]<<endl;
      }
    }return ;
  }

int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: enqueue();
         break;
         case 2: dequeue();
         break;
         case 3: display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}