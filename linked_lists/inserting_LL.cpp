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


void insert(struct node *p,int A,int pos){
    struct node *t;
    t=new struct node;
    t->data=A;
    if(pos==0){
        t->next=first;
        first=t;
    }
    else if(pos>0){
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }t->next=p->next;
        p->next=t;
    }
}

int main(){
    
    int A[6]={9,5,3,9,7,5};
    create(A,6);
    display(first);
    cout<<endl;
    insert(first,88,3);
    display(first);
   
    return 0;
}
