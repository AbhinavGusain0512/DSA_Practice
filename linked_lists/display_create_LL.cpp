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

int main(){
    // struct Node *temp;
    int A[7]={1,6,4,7,1,9,7};
    create(A,7);
    display(first);

    return 0;
}