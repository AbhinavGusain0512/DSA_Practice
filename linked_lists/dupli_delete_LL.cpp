#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next; 
}*first=NULL;

void create(int A[],int size){
    struct node *last;
    struct node *t;
    
    first=(struct node *)malloc(sizeof(struct node));
    // first=new struct node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<size;i++){
       t=(struct node *)malloc(sizeof(struct node));
       t->data=A[i];
       t->next=NULL;
       last->next=t;
       last=t;
    }

}

void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

void duplicate(struct node *p){
    struct node *q;
    q=p->next;;
    
    
    while(q){
        if(p->data==q->data){
            p->next=q->next;
            free(q);
            q=p->next;
        }
        else{
            p=q;
            q=q->next;
            
        }
    }
    
}

int main(){
    
    int A[7]={1,2,3,4,5,7,7};
    create(A,7);
    display(first);
    duplicate(first);
    cout<<endl;
    display(first);

    return 0;
}