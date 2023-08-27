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
void insertathead(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
            }
    temp->next=n;
    n->next=head;
    head=n;
}
void insertattail(node* &head,int val){
    if(head==NULL){
        insertathead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }while(temp!=head);
    cout<<"Repeat "<<endl;
}
void deleteathead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int pos){
    if(pos==1){
       deleteathead(head);
    }
    node*temp=head;
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

int main(){
    node* head=NULL;

insertattail(head,1);
insertathead(head,2);
insertathead(head,3);
insertattail(head,4);
deleteathead(head);
display(head);
return 0;
}