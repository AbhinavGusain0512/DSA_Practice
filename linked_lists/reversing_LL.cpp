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
void reverse(struct node *p){
    struct node *q,*r;
    q=NULL;
    r=NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }first=q;
}

int main(){
    // struct Node *temp;
    int A[7]={1,2,3,4,5,6,7};
    create(A,7);
    display(first);
    reverse(first);
    cout<<endl;
    display(first);

    return 0;
}