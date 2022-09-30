#include <iostream>
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

void count(struct node *p){
    int count=0;
    while(p!=NULL){
    count++;
    p=p->next;}
    cout<<"count is: " <<count<<endl;
}
int sum(struct node *p){
    if(p!=NULL){
        return sum(p->next)+p->data;
    }
    else{
       
       return 0;}

    // if(p==NULL){
    //     return 0;
    // }
    // else{
    //     return sum(p->next)+p->data;
    // }
}

int main(){
    int A[6]={9,5,3,9,7,5};
    create(A,6);
    display(first);
    count(first);
    int x;
    x=sum(first);
    cout<<"sum is "<<x;
   
    return 0;
}

