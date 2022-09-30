#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct queue{
    int size;
    int front;
    int rear;
    int Q[5];

};
 
void create(struct queue *q,int size){
    q->size=size;
    q->front = q->rear = -1;
    q->Q[]=new int[size];
    // q->Q=(int *)malloc(q->size*sizeof(int));
     }

void enqueue(struct queue *q,int n){
    if(q->rear==(q->size)-1){
        cout<<"queue is full"<<endl;
    }
    else{
        q->rear++;
        q->Q[q->rear]=n;
    }
}



void dequeue(struct queue *q){
    int x = -1;
    if(q->front==q->rear){
        cout<<"queue is empty"<<endl;
    }
    else{
       
        q->front++;
        x=q->Q[q->front - 1];
        cout<<"element been removed is: "<<x<<endl;
    }
}

void display(struct queue *q){
    if(q->front=q->rear){
        cout<<"queue is empty"<<endl;
    }
    else{
        for(int i=q->front+1;i<=q->rear;i++){
            cout<<q->Q[i]<<"  " ;
        }
    }
}

int main(){
    struct queue k;
    create(&k,5);
    enqueue(&k,1);
    enqueue(&k,0);
    enqueue(&k,4);
    enqueue(&k,2);
    enqueue(&k,5);
    display(&k);


    int input = 0;


    while(input != -1){
        cout << "Enter 1 for enqueu -> "<<endl;
        cout << "Enter 2 for display -> "<<endl;
        cin >> input;
        switch(input){
            case 1: 
            cout << "Enter value to insert : " << endl;
            int val;
            cin >> val;
            enqueue(&k , val);
            break;

            case 2: display(&k);
            break;
        }
    }

    
    
    return 0;
}

    