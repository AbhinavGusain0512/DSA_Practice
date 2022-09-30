#include <iostream>
using namespace std;

struct node {
    struct node *prv;
    int data;
    struct node *next;
}*first=NULL;

void create(struct node *p,int A[],int size){
    struct node *t,*last;
    first=new struct node;
    
    first->data=A[0];
    first->prv=NULL;
    first->next=NULL;
    last=first;

    for(int i=1;i<size;i++){
        t=new struct node ;
        last->next=t;
        t->data=A[i];
        t->prv=last;
        t->next=NULL;
        last=t;
        

    }
    // for(int i=1;i<size;i++){
    //     t=new node ;
    //     t->data=A[i];
    //     t->next=last->next;
    //     t->prv=last;
    //     last->next=t;
    //     last=t;

    // }
}

display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int length(struct node *p){
    int len=0;
    while (p!=NULL){
        len++;
        p=p->next;
    }return len;
}

void insert(struct node *p,int d,int index){
    struct node *t;
        t=new struct node;
        t->data=d;
        t->next=NULL;
        t->prv=NULL;
    
    if(index==0){
        t->prv=NULL;
        t->next=first;
        first->prv=t;
        first=t;}

        if(index > 0 && index<=length(p)){

            for(int i=0;i<index-1;i++){
                p=p->next;
            }
            t->prv=p;
            t->next=p->next; 
            if(p->next)p->next->prv=t;
            p->next=t;
            
            
        }
    
}

int main(){
    int A[5]={1,3,5,2,4};
    create(first,A,5);
    display(first);
    cout<<endl;
    insert(first,12,3);
    display(first);

    return 0;
    
}