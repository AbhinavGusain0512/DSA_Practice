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
void isLoop(struct node *p){
    struct node *q,*r;
    r=q=p;
    do{
        r=r->next;
        q=q->next;
        q=q?q->next:q;
    }while(r && q && r!=q);
    if(r==q){
        cout<<"LL is looped"<<endl;}
        else{
            cout<<"LL is not looped"<<endl;
        }
       
    
}

int main(){
    struct node *t1,*t2;
    int A[7]={1,2,3,4,5,6,7};
    create(A,7);

    display(first);
    cout<<endl;
    t1=first->next->next->next;
    t2=first->next->next->next->next->next->next;
    t2->next=t1;
    isLoop(first);
    
    return 0;
}