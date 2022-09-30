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

int Max(struct node *p){
    int max=INT32_MIN;
    while(p->next!=NULL){
        if(p->data>max){
            max=p->data;

        }p=p->next;
    }return max;
    }

    
int main(){
    
    int A[6]={9,5,3,9,7,5};
    create(A,6);
    display(first);
    cout<<"max element is "<<Max(first);
   
    return 0;
}
