#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next; 
}*first=NULL,*second=NULL,*third=NULL;

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

void create2(int B[],int size){
    struct node *last;
    struct node *t;
    
    second=(struct node *)malloc(sizeof(struct node));
    second->data=B[0];
    second->next=NULL;
    last=second;

    for(int i=1;i<size;i++){
       t=(struct node *)malloc(sizeof(struct node));
       t->data=B[i];
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

void merge(struct node *p,struct node *q){
    struct node *last;
    
    if(p->data<q->data){
        third=last=p;
        p=p->next;
        third->next=NULL;
        
    }
    else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    
    }while( p && q){
        if(p->data<q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
            
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
            
        }
    }
    if(p){
        last->next=p;
        last=p;
    }else{
        last->next=q;
        last=q;
    }
}

int main(){
    // struct Node *temp;
    int A[4]={1,3,5,7};
    int B[4]={2,4,6,8};
    create(A,4);
    create2(B,4);
    display(first);
    cout<<endl;
    display(second);
    merge(first,second);
    cout<<endl;
    display(third);

    return 0;
}