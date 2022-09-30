#include <iostream>
using namespace std;

struct node {
    struct node *prv;
    int data;
    struct node *next;
}*first=NULL;

void create(struct node *p,int A[],int size){
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


int main(){
    int A[5]={1,3,5,2,4};
    create(first,A,5);
    display(first);
    cout<<endl;
    Delete(first,2);
    display(first);
    
    return 0;
    
}