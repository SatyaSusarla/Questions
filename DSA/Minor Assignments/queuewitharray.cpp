#include <iostream>
#include <string>
#define capacity 100
using namespace std;
class student{
    public:
    string studentName;
      int rollNo;
    string department;
    
};
class Queue{
    int front;
    int rear;
    int count;
    student a[capacity];
    public:
    Queue(){
        front=-1;
        rear=-1;
     
        count=0;
    }
bool enQueue(int x,string nam, string dept){
     if(isFull()){
        cout<<"Queue overflow"<<endl;
        return false;
     }
     else{
         if(isEmpty()){
             front=0;
             rear=0;
         }
         else{
             rear=(rear+1)%capacity;
         }
     a[rear].rollNo=x;
     a[rear].studentName=nam;
     a[rear].department=dept;
     count++;
     return true;
    }
}
    bool isEmpty(){
        return count==0;
    }
    bool isFull(){
        return count==capacity;
    }
    int size(){
        return count;
    }
    void deQueue(){
        if(isEmpty()){
            cout<<"No elements in Queue"<<endl;
            return;
        }
        else{
         cout<<" Name : "<<a[front].studentName<<endl<<" Roll Number : "<<a[front].rollNo<<endl<<" Department : "<<a[front].department<<endl;
            if(size()==1){
                front=-1;
                rear=-1;
            }
            else{
                front=(front+1)%capacity;
            }
          count--;
    }
    }
    void Front(){
        if(isEmpty()){
            cout<<"No elements in Queue"<<endl;
            return;
        }
    cout<<" Name : "<<a[front].studentName<<endl<<" Roll Number : "<<a[front].rollNo<<endl<<" Department : "<<a[front].department<<endl;
    }
void Rear(){
        if(isEmpty()){
            cout<<"No elements in Queue"<<endl;
            return;
        }
    cout<<" Name : "<<a[rear].studentName<<endl<<" Roll Number : "<<a[rear].rollNo<<endl<<" Department : "<<a[rear].department<<endl;
    }
    void Print(){
        int x=front;
        if(isEmpty()){
            cout<<"No elements in stack"<<endl;
            return;
        }
        for(int i=0; i<capacity; i++){
if(x>=capacity){
x=0;
}
if(x==rear){
break;
}
              cout<<" Name : "<<a[x].studentName<<endl<<" Roll Number : "<<a[x].rollNo<<endl<<" Department : "<<a[x].department<<endl;
            x++;
        }
    }
    
};

int main(){
    Queue s1;
    int choice;
    do{
    cout<<"1. EnQueue  2. DeQueue  3. Front  4. To check if Empty  5. To check if Full  6. Print  7. Rear  8. Size  0. End"<<endl;
    cin>>choice;
    switch(choice){
        case 0:{
            cout<<"Exit"<<endl;
            break;
        }
        case 1:{
if(s1.isFull()){
cout<<"Queue overflow"<<endl;
break;
}
        cout<<"Enter Name, Roll Number and Department "<<endl;
        int r;
        string m,d;
        cin>>m;
        cin>>r;
        cin>>d;
        s1.enQueue(r,m,d);
        break;
        }
        case 2:{
            s1.deQueue();
            break;
        }
        case 3:{
            s1.Front();
            break;
        }
        case 4:{
           if(s1.isEmpty()){
               cout<<"The Queue is Empty"<<endl;
           }
           else{
               cout<<"The Queue is not Empty"<<endl;
           }
            break;
        }
        case 5:{
            if(s1.isFull()){
               cout<<"The Queue is Full"<<endl;
           }
           else{
               cout<<"The Queue is not Full"<<endl;
           }
            break;
        }
        case 6:{
            s1.Print();
        }
case 7:{
            s1.Rear();
            break;
        }
case 8:{
cout<<"The size of Queue is "<<s1.size()<<endl;
break;
    
}
        default: cout<<"Error"<<endl;
    }
    }while(choice!=0);
    return 0;
}