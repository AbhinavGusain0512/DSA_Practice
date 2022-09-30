// circular linked list
#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
}*head;

void create(int A[],int size){
    struct node *last,*t;

    head=new struct node ;
    head->data=A[0];
    head->next=head;
    last=head;
    

    for(int i=1;i<size;i++){
    t=new struct node;
    t->data=A[i];
    // t->next=last->next;
    t->next=head;
    last->next=t;
    last=t;

    }
    }

int length(struct node *p){
    int len=0;
    do{
        len++;
        p=p->next;
    }while(p!=head);
    return len;
}

void insert(struct node *p,int A,int pos){
    struct node *t;
    if(pos<0 || pos>length(p)){
        return ;
    }

    if(pos==0){
        t=new struct node;
        t->data=A;
        if(head==NULL){
            head=t;
            head->next=head;
        }
        else{
            while(p->next!=head){
                p=p->next;
            }
            p->next=t;
            t->next=head;
            head=t;        
            }
    }
    else{
        for(int i=0;i<pos-1;i++)p=p->next;
        t=new struct node;
        t->data=A;
        t->next=p->next;
        p->next=t;
    }

}

// void display(struct node *p){
//     static int flag=0;
//     if(flag==0 || p!=head){
//         flag=1;
//         cout<<p->data<<" ";
//         display(p->next);
        
//     }
//     flag=0;
// }

void display(struct node *p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

void Ddelete(struct node *p,int pos){
    int x;
    if(pos>length(p) || pos<=0){
        cout<<"can't delete element at this pos "<<endl;
    }
    if(pos==1){
        while(p->next!=head){
            p=p->next;
        }
        x=head->data;
        p->next=head->next;
        head=head->next;
    }else{
        struct node *q;
        for(int i=0;i<pos-2;i++){
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
    }cout<<"element deleted is "<<x;
}

int main(){
    int A[5]={1,2,3,4,5};
    create(A,5);
    display(head);
    cout<<endl;
    // cout<<length(head);
    // insert(head,2,2);
    Ddelete(head,5);
    cout<<endl;
    display(head);
    return 0;
}