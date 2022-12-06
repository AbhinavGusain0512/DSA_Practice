#include <iostream>
using namespace std;

struct node {
    int data;
    struct node  *left;
    struct node *right;
};

struct node * create(){
    int x;
    struct node *t;
    t=new struct node ;
    cout<<"enter data : ";
    cin>>x;
    if(x==-1)return 0;

    t->data=x;
    cout<<"enter left child of "<<x<<endl;
    t->left=create();

    cout<<"enter right child of "<<x<<endl;
    t->right=create();

    return t;

}
void preorder(struct node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        preorder(p->left);
        preorder(p->right);
    }
}

void inorder(struct node *p){
    if(p!=NULL){
        inorder(p->left);
        cout<<p->data<<" ";
        inorder(p->right);
    }
}
void postorder(struct node *p){
    if(p!=NULL){
        postorder(p->left);
        postorder(p->right);
        cout<<p->data<<" ";
    }
}
int main(){
    struct node *root=NULL;
    root=create();
    postorder(root);

    return 0;
}