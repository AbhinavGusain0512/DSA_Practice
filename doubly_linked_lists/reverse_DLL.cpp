#include <iostream>
using namespace std;

struct node {
    struct node *prv;
    int data;
    struct node *next;
}*first=NULL;

void create(int A[],int size){
    struct node *t,*last;
    first=new node ;
    
    first->data=A[0];
    first->prv=NULL;
    first->next=NULL;
    last=first;

    // for(int i=1;i<size;i++){
    //     t=new node ;
    //     last->next=t;
    //     t->data=A[i];
    //     t->prv=last;
    //     t->next=NULL;
    //     last=t;

    // }
    for(int i=1;i<size;i++){
        t=new node ;
        t->data=A[i];
        t->next=last->next;
        t->prv=last;
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

int length(struct node *p){
    int len=0;
    while (p!=NULL){
        len++;
        p=p->next;
    }return len;
}

void Delete(struct node *p,int pos){
    if(pos>1){
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        if(p->next!=0){
            p->prv->next=p->next;
            p->next->prv=p->prv;
        }
        else{
            p->prv->next=p->next;
        }
    }
    if(pos==1){
        first=first->next;
        p->next=NULL;
        first->prv=NULL;
    }
}

void reverse(struct node *p){
    struct node *temp;
    while(p){ 
        
        temp=p->next;
        p->next=p->prv;
        p->prv=temp;   
        p=p->prv;
        if(p!=NULL && p->next==NULL){
            first=p;
        }

    }
}

int main(){
    int A[5]={1,3,5,2,4};
    create(A,5);
    display(first);
    cout<<endl;
    reverse(first);
    // Delete(first,4);
    display(first);
    
    return 0;
    
}