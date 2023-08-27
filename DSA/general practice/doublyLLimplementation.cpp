#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}
void insertattail(node* &head,int val){
    if(head==NULL){
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}
void deletion(node* &head,int pos){
    if(pos==1){
        deleteathead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    } 
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
}
int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
}
node* kappend(node* &head,int k){
    node* newhead;
    node* newtail;
    node* tail=head;
  int l=length(head);
  k=k%l;
  int count=1;
  while(tail->next!=NULL){
    if(count==l-k){
        newtail=tail;
    }
    if(count==l-k+1){
        newhead=tail;
    }
    tail=tail->next;
    count++;
  }
  newtail->next=NULL;
  tail->next=head;
  return newhead;
}
int main(){
    node* head=NULL;
    insertathead(head,1);
    insertattail(head,2);
  display(head);
  return 0;
}