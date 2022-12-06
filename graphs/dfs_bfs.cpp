#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    struct node* t;
    t=new struct node;
    if(t==NULL){
        cout<<"Queue is full"<<endl;
    }
    else{
        t->data=x;
        t->next=NULL;

        if(front==NULL){
            front=rear=t;
        }
        else{
            rear->next=t;
            rear=t;
        }
    }
}
int dequeue(){
    int x=-1;
    struct node*t;

    if(front==NULL){
        cout<<"Queue is empty"<<endl;
    }
    else{
        x=front->data;
        t=front;
        front=front->next;
        delete(t);
    }
    return x;
}

int isEmpty(){
    return front==NULL;
}

void BFS(int **G,int start,int n){
    int i=start,j;

    int visited[7]={0};

    cout<<i;
    visited[i]=1;
    enqueue(i);

    while(!isEmpty()){
        i=dequeue();
        for(j=1;j<n;j++){
            if(G[i][j]==1 && visited[j]==0){
                cout<<j<<" ";
                visited[j]=1;
                enqueue(j);
        }
    }
}}

void DFS(int **G,int start,int n){
    static int visited[7]={0};
    int j;

    if(visited[start]==0){
        printf("%d ",start);
        visited[start]=1;

        for(j=1;j<n;j++){
            if(G[start][j]==1 && visited[j]==0)
            DFS(G,j,n);
        }
    }
}

int main(){
    int i,j;
    int size;
    cout<<"Enter size of matrix: ";
    cin>>size;
    int start;

    int G[size][size];

    int *B[size];

    for(int i = 0 ; i < size ;i++){
        B[i] = G[i];
    }

    cout<<"Input a 2D array that represents a graph:"<<endl;
    for(i=0;i<size;i++){
        cout<<"Enter row =>  "<<i << "==>  ";
        for(j=0;j<size;j++){
            cin>>G[i][j];
        }
    }

    cout<<"enter starting element for traversal"<<endl;
    cin>>start;
    
    cout<<"BFS traversal is: ";
    BFS(B,start,size);
    cout<<endl<<"DFS traversal is: ";
    DFS(B,start,size);
    return 0;
     
}