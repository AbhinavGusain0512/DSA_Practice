#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first=NULL;

void create(int arr[],int size){
    struct node *t;
    struct node *last;

    first=new struct node;
    first->data=arr[0];
    first->next=NULL;
    last=first;

     for(int i=1;i<size;i++){
        t=new struct node;
        t->data=arr[i];
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


int btf(struct node *p,int A){
    struct node *q=NULL;
    while(p->data!=A){
        q=p;
        p=p->next;   
    }
    q->next=p->next;
    p->next=first;
    first=p;
}

int main(){
    
    int A[6]={9,5,3,9,7,5};
    create(A,6);
    display(first);
    btf(first,7);
    
    cout<<endl;
    

    display(first);
    
   
    return 0;
}
