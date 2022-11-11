#include <iostream>
using namespace std;

int SIZE=10;

int hash1(int key){
    return key%SIZE;
}
int hash2(int key){
    return ((2*key)+3)%SIZE;
}

int probe(int H[],int key){
    int i=0;
    int index=hash1(key);

    while(H[index]!=0){
        index=(hash1(key)+(hash2(key)*i))%SIZE;
        i++;
    }
    return index%SIZE;
}

void insert(int H[],int key){
    int index=hash1(key);
    if(H[index]==0){
        index=hash1(key);
    }
    else if(H[index]!=0){
        index=probe(H,key);
    }
    H[index]=key;
}
void display(int H[]){
    for(int i=0;i<10;i++){
        cout<<H[i]<<" ";
    }cout<<endl;
}



int main(){
    int ch,key;
    int H[];

    cout<<"Array initially will be empty"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"1)Display hash table"<<endl;
    cout<<"2)Enter element"<<endl;
    cout<<"3)Search element"<<endl;
    cout<<"4)Exit"<<endl;

    do{
        cout<<"Enter your choice: "<<endl;
    }


    return 0;

}