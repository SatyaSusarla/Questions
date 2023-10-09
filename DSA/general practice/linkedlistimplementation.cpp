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
void insertattail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node *head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
  cout<<"NULL"<<endl;
}
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void deletion(node* &head,int val){
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
node* reverserecursive(node* &head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* newhead=reverserecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
node* reversek(node* &head, int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
}
//floyds algorithm
bool cycledetect(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
void removecycle(node* &head){
    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
void insertatpos(node *&head,int y,int pos){
    node* temp=head;
    int count=0;
    while(count!=pos-1){
        temp=temp->next;
        count++;
        }
    cout<<temp->data<<endl;
    node* n=new node(y);
    node* x=temp->next;
    temp->next=n;
    n->next=x;
}
int main(){
 node* head=NULL;

insertathead(head,1);
insertathead(head,2);
insertathead(head,3);
insertathead(head,4);
insertatpos(head,5,2);
display(head);

    return 0;
}