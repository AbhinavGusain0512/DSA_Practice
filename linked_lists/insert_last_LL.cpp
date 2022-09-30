#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
}*first;

void insert(struct node *p,int A){
    struct node *t;
    struct node *last;
    t=new struct node;
    if(first==NULL){
        t->data=A;
        t->next=NULL;
        first=last=t;
    }
    else{
    t->data=A;
    t->next=NULL;
    last->next=t;
    last=t;}
}
void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main(){
    insert(first,8);
    insert(first,9);
    insert(first,3);
    display(first);
    return 0;
}