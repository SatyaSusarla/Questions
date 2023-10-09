#include <iostream>
using namespace std;

class node{
    public:
    char data;
    node* next;
    node* prev;
    node(char val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertathead(node* &head,char val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}
void insertattail(node* &head,char val){
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
void insertatpos(node* &head, int pos,char val){
    node* n=new node(val);
    if(pos==1){
        insertathead(head,val);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    } 
    if(temp->next!=NULL){       
      n->next = temp->next;
      n->prev = temp;
      temp->next = n;
      if(n->next != NULL)
        n->next->prev = n;  
    }
}
bool insertafterval(node* &head,char val,char key){
    if(head==NULL){
     return false;
    }
    else{
        node* n=new node(val);
        node* temp=head;
        while(temp->data!=key){
            temp=temp->next;
        }
        if(temp->next!=NULL){       
      n->next = temp->next;
      n->prev = temp;
      temp->next = n;
      if(n->next != NULL)
        n->next->prev = n;  
    }
    else{
        return false;
    }
    return true;
    }
}
void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}
void deleteattail(node* &head){
     if(head==NULL){
        return;
    }
    node* n;
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    n=temp->next;
    delete n;
}
void deletionatpos(node* &head,int pos){
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
bool deleteafterval(node* &head,char key){
      if(head==NULL){
     return false;
    }
    else{
        node* temp=head;
        while(temp->data!=key && temp->next!=NULL){
            temp=temp->next;
        }
        if(temp->next==NULL){
            return false;
        }
         node* n=temp->next;        
        temp->next= n->next;  
        n->next->prev=temp;  
        delete n;
          return true;
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
    cout<<endl;
}
bool search(node* head,char key){
    if(head==NULL){
        return false;
    }
    node* temp=head;
    while(temp->data!=key && temp->next!=NULL){
        temp=temp->next;       
    }
   
     return false;
}
int main(){
    node* head=NULL;
    int n;
    do{
    cout<<"Enter 0. Exit  1. Insert at Head  2. Insert at Tail  3. Insert at Position  4. Insert after Value  5. Delete at Head  6. Delete at Tail"<<endl<<" 7. Delete at Position  8. Delete after Value  9. Search  10. Size  11. Print "<<endl;
    cin>>n;
    switch(n){
        case 0:{
        cout<<"Exit"<<endl;
        break;
        }
        case 1:{
        cout<<"Enter a Value"<<endl;
        char c;
        cin>>c;
        insertathead(head,c);
        break;
        }
        case 2:{
        cout<<"Enter a Value"<<endl;
        char c;
        cin>>c;
        insertattail(head,c);
        break;
        }
        case 3:{
        cout<<"Enter a Value"<<endl;
        char c;
        cin>>c;
        cout<<"Enter Position"<<endl;
        int n;
        cin>>n;
        insertatpos(head,n,c);
        break;
        }
        case 4:{
        cout<<"Enter a Value"<<endl;
        char c;
        cin>>c;
        cout<<"Enter Value"<<endl;
        char d;
        cin>>d;
        insertafterval(head,d,c);
        break;
        }
        case 5:{
            deleteathead(head);
            break;
        }
        case 6:{
            deleteattail(head);
            break;
        }
        case 7:{
            int pos;
            cout<<"Enter Position"<<endl;
            cin>>pos;
            deletionatpos(head,pos);
            break;
        }
         case 8:{
            char pos;
            cout<<"Enter Value"<<endl;
            cin>>pos;
            deleteafterval(head,pos);
            break;
        }
        case 9:{
            char key;
            cout<<"Enter Value"<<endl;
            cin>>key;
            search(head,key);
            break;
        }
        case 10:{
            cout<<length(head)<<endl;
            break;
        }
        case 11:{
            display(head);
            break;
        }
    }
    }while (n!=0);
    
  return 0;
}