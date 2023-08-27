#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

class que{
    public:
    node* front;
    node* back;

    que(){
        front=NULL;
        back=NULL;

    }

void push(int x){
    node* n=new node(x);
    if(front==NULL){
     back=n;
     front=n;
     return;
    }
    back->next=n;
    back=n;
}
void pop(){
    if(front==NULL){
        cout<<"queue underflow"<<endl;
        return;
    }
    node* todelete=front;
    front=front->next;
    delete todelete;
}

void peek(){
    if(front==NULL){
        cout<<"no element in queue"<<endl;
        return;
    }
    cout<<front->data<<endl;
}

bool empty(){
    if(front==NULL){
        return true;
    }
    return false;
}
void display(){
    node*x=front;
    while(x!=NULL){
        cout<<x->data<<endl;
        x=x->next;
    }
}
};
int main(){
    que q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.pop();
    q.display();
    return 0;
}