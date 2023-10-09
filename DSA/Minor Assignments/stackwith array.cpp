#include <iostream>
#include <string>
using namespace std;
#define n 100
struct student{
    string studentName;
      int rollNo;
    string department;
    
};
class stack{
    student a[n];
    int top;
    public:
    stack(){
        top=-1;
    }
      bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==n-1;
    }
bool Push(int x,string name, string dept){
     if(isFull()){
        cout<<"stack overflow"<<endl;
        return false;
     }
     top++;
     a[top].rollNo=x;
     a[top].studentName=name;
     a[top].department=dept;
     return true;
    }
  
    void Pop(){
        if(isEmpty()){
            cout<<"No elements in stack"<<endl;
            return;
        }
        cout<<" Name : "<<a[top].studentName<<endl<<" Roll Number : "<<a[top].rollNo<<endl<<" Department : "<<a[top].department<<endl;
          top--;
    }
    void Top(){
        if(isEmpty()){
            cout<<"No elements in stack"<<endl;
            return;
        }
        cout<<" Name : "<<a[top].studentName<<endl<<" Roll Number : "<<a[top].rollNo<<endl<<" Department : "<<a[top].department<<endl;
    }
    void Print(){
        int x=top;
        if(isEmpty()){
            cout<<"No elements in stack"<<endl;
            return;
        }
        while(x>=0){
              
             cout<<" Name : "<<a[x].studentName<<endl<<" Roll Number : "<<a[x].rollNo<<endl<<" Department : "<<a[x].department<<endl;
           cout<<endl;
            x--;
        }
    }
};

int main(){
    stack s1;
    int choice;
    do{
    cout<<"1. Push  2. Pop  3.Top  4.Print  5.To check if Empty  6.To check if Full 0. End"<<endl;
    cin>>choice;
    switch(choice){
          case 0:{
            cout<<"Exit"<<endl;
            break;
        }
        case 1:{
             int r;
        string m,d;
        cout<<"Enter Name"<<endl;
          cin>>m;
       cout<<"Enter Roll Number"<<endl;  
        cin>>r;
       cout<<"Enter Department "<<endl;
        cin>>d;
        s1.Push(r,m,d);
        break;
        }
        case 2:{
            s1.Pop();
            cout<<endl;
            break;
        }
        case 3:{
            s1.Top();
            cout<<endl;
            break;
        }
        case 4:{
            s1.Print();
            cout<<endl;
            break;
        }
        case 5:{
           if(s1.isEmpty()){
               cout<<"The Stack is Empty"<<endl;
           }
           else{
               cout<<"The Stack is not Empty"<<endl;
           }
            break;
        }
        case 6:{
            if(s1.isFull()){
               cout<<"The Stack is Full"<<endl;
           }
           else{
               cout<<"The Stack is not Full"<<endl;
           }
            break;
        }
        default: cout<<"Error"<<endl;
    }
    }while(choice!=0);
    return 0;
}