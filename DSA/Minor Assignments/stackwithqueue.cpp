#include <iostream>
#include <climits>
#define capacity 5
using namespace std;

class Queue{
    int front;
    int rear;
    int count;
    char a[capacity];
    public:
    Queue(){
        front=-1;
        rear=-1;
     
        count=0;
    }
bool enQueue(char x){
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
     a[rear]=x;
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
    char deQueue(){
        if(isEmpty()){
            cout<<"No elements in Stack"<<endl;
            return CHAR_MAX;
        }
        else{
            char topval=a[front];   
         if(size()==1){
               
                front=-1;
                rear=-1;
            }
            else{
               
                front=(front+1)%capacity;
               
            }
          count--;
          return topval;
    }
    }
    char Peek(){
        if(isEmpty()){
            cout<<"No elements in Stack"<<endl;
            return CHAR_MAX;
        }
       return a[front];
    }
    void Print(){
        int x=front;
        if(isEmpty()){
            cout<<"No elements in Stack"<<endl;
            return;
        }
        for(int i=0; i<count; i++){
          if(x>=capacity){
           x=0;
           }
        if(x==rear+1){
           break;
           }
           cout<<a[x]<<"  ";
            x++;
        }
        cout<<endl;
    }
};
class stack1{
      int N;
    Queue q1;
    Queue q2;
       public:
    stack1(){
        N=0;
    }
bool Push(char val){
    if(q1.isFull()){
        cout<<"Stack is Full"<<endl;
        return false;
    }
    q2.enQueue(val);
    N++;
    while(!q1.isEmpty()){
        q2.enQueue(q1.Peek());
        q1.deQueue();
    }
    while(!q2.isEmpty()){
        q1.enQueue(q2.Peek());
        q2.deQueue();
    }
}
char Pop(){
    if(q1.isEmpty()){
        cout<<"The stack is empty"<<endl;
        return CHAR_MAX;
    }
      N--;
   char x=q1.Peek();
   q1.deQueue();
   return x;
  
}
char Top(){
    return q1.Peek();
}
int size(){
    return N;
}
bool isEmpty(){
    return N==0;
}
bool isFull(){
    return (q1.isFull());
}
void Print(){
    q1.Print();
}
};



class stack2{
      int N;
    Queue q1;
    Queue q2;
       public:
    stack2(){
        N=0;
    }
bool Push(char val){
    if(q1.isFull()){
        cout<<"The stack is full"<<endl;
        return false;
    }
    q1.enQueue(val);
    N++;
    return true;
}
char Pop(){
    if(q1.isEmpty()){
        cout<<"The stack is empty"<<endl;
        return CHAR_MAX;
    }
    
    while(N>1){
        q2.enQueue(q1.Peek());
        q1.deQueue();
        N--;
    }
    char x=q1.Peek();
    q1.deQueue();
    N--;
    while(!q2.isEmpty()){
        q1.enQueue(q2.Peek());
        q2.deQueue();
        N++;
    }
    return x;
}
char Top(){
    if(q1.isEmpty()){
        cout<<"The stack is empty"<<endl;
        return CHAR_MAX;
    }
   RevQue();
    char x= q1.Peek();
    RevQue();
    return x;
}
int size(){
    return N;
}
bool isEmpty(){
    return N==0;
}
bool isFull(){
    return (q1.isFull());
}
void RevQue(){
  if (q1.isEmpty())
        return;
 
    char data = q1.Peek();
    q1.deQueue();
    RevQue();
    q1.enQueue(data);
    
}
void Print(){
    RevQue();
    q1.Print();
    RevQue();
}
};
int main(){
    int choice1;
    cout<<"1. Push Operation in O(n)  2. Pop Operation in O(n)"<<endl;
    cin>>choice1;
    if(choice1==1){
    stack1 s1;
     int choice;
    do{
    cout<<"1. Push  2. Pop  3.Top  4.Print  5.To check if Empty  6.To check if Full  0. End"<<endl;
    cin>>choice;
    switch(choice){
          case 0:{
            cout<<"Exit"<<endl;
            break;
        }
        case 1:{
        cout<<"Enter Charecter"<<endl;
       char x;
        cin>>x;
        s1.Push(x);
        break;
        }
        case 2:{
            cout<<s1.Pop()<<endl;
            break;
        }
        case 3:{
           cout<<s1.Top()<<endl;
            break;
        }
        case 4:{
            s1.Print();
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
    }
    else if(choice1==2){
   stack2 s1;
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
        cout<<"Enter Charecter"<<endl;
       char x;
        cin>>x;
        s1.Push(x);
        break;
        }
        case 2:{
            cout<<s1.Pop()<<endl;
            break;
        }
        case 3:{
           cout<<s1.Top()<<endl;
            break;
        }
        case 4:{
            s1.Print();
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
    }
    return 0;
}