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

// void isSorted(struct node *p)
// {
//  int x=INT32_MIN;

//  while(p->data<x && p) {
//     x=p->data;
//     p=p->next;
//     }
//  }

int isSorted(struct node *p)
{
 int x=-65536;

 while(p!=NULL){
    if(p->data < x)
        return 0;
    
 x=p->data;
 p=p->next;
 }
 return 1;}

int main(){
    // struct Node *temp;
    int A[7]={1,2,3,4,5,6,4};
    create(A,7);
    display(first);
    cout<<endl;
    cout<<isSorted(first);
    

    return 0;
}