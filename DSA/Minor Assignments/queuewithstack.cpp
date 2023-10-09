#include <iostream>
#include <climits>
#include <string>
using namespace std;
#define n 100
class stack{
    char a[n];
    int top;
    public:
    stack(){
        top=-1;
    }
bool push(char input){
     if(isFull()){
        cout<<"stack overflow"<<endl;
        return false;
     }
     top++;
     a[top]=input;
     return true;
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==n-1;
    }
    char pop(){
        if(isEmpty()){
            cout<<"No elements in stack"<<endl;
            exit(-1);
        }
      char x=a[top];
      top--;
      return x;
    }
    char Top(){
        if(isEmpty()){
            cout<<"No elements in stack"<<endl;
            exit(-1);
        }
        return a[top];
    }
    void Print(){
        int x=top;
        if(isEmpty()){
            cout<<"No elements in stack"<<endl;
            return;
        }
      for(int i=x;i>=0;i--){
          cout<<a[i]<<"  ";
        }
        cout<<endl;
    }
};
class queue1{
    stack s1;
    stack s2;
    public:
    bool enQueue(char x){
        if(s1.isFull()){
            cout<<"The Queue is Full"<<endl;
            return false;
        }
        s1.push(x);
        return true;
    }
    char deQueue(){
        if(s1.isEmpty() and s2.isEmpty()){
            cout<<"Queue is empty"<<endl;
            return CHAR_MAX;
        }
       else if(s2.isEmpty()){
            while(!s1.isEmpty()){
                s2.push(s1.Top());
                s1.pop();
            }
            char topval=s2.Top();
            s2.pop();
            while(!s2.isEmpty()){
                s1.push(s2.Top());
                s2.pop();
            }
            return topval;
        }
    }
     
    bool IsEmpty(){
        if(s1.isEmpty() and s2.isEmpty()){
            return true;
        }
        return false;
        }
    char Front(){
      if(s1.isEmpty() and s2.isEmpty()){
            cout<<"Queue is empty"<<endl;
            exit(-1);
        }
        else if(s2.isEmpty()){
            while(!s1.isEmpty()){
                s2.push(s1.Top());
                s1.pop();
            }
            char topval=s2.Top();
             while(!s2.isEmpty()){
                s1.push(s2.Top());
                s2.pop();
            }
            return topval;
        }
       
    }
    char Rear(){
           if(s1.isEmpty() and s2.isEmpty()){
            cout<<"Queue is empty"<<endl;
            exit(-1);
        }
        return s1.Top();
        
    }
    bool IsFull(){
         if(s1.isFull() || s2.isFull()){
            return true;
        }
        return false;
    }
    void Print(){
    while(!s1.isEmpty()){
                s2.push(s1.Top());
                s1.pop();
            }
        s2.Print();
        while(!s2.isEmpty()){
                s1.push(s2.Top());
                s2.pop();
            }
    }
};
class queue2{
    stack s1;
    stack s2;
    public:
    bool enQueue(char x){
          if(s1.isFull() || s2.isFull()){
            cout<<"Queue is full"<<endl;
            return false;
        }
       else if(s2.isEmpty()){
            while(!s1.isEmpty()){
                s2.push(s1.Top());
                s1.pop();
            }
      
            s1.push(x);
            while(!s2.isEmpty()){
                s1.push(s2.Top());
                s2.pop();
            }
        }
        return true;
    }
    char deQueue(){
        if(s1.isEmpty() and s2.isEmpty()){
            cout<<"Queue is empty"<<endl;
            return CHAR_MAX;
        }
       char topval=s1.Top();
        s1.pop();
            return topval;
        }
    
    bool IsEmpty(){
        if(s1.isEmpty() and s2.isEmpty()){
            return true;
        }
        return false;
        }
    char Front(){
         if(s1.isEmpty() and s2.isEmpty()){
            cout<<"Queue is empty"<<endl;
            exit(-1);
        }
        return s1.Top();
       
    }
    char Rear(){
        if(s1.isEmpty() and s2.isEmpty()){
            cout<<"Queue is empty"<<endl;
            exit(-1);
        }
        else if(s2.isEmpty()){
            while(!s1.isEmpty()){
                s2.push(s1.Top());
                s1.pop();
            }
            char topval=s2.Top();
             while(!s2.isEmpty()){
                s1.push(s2.Top());
                s2.pop();
            }
            return topval;
        }
    }
    bool IsFull(){
         if(s1.isFull() || s2.isFull()){
            return true;
        }
        return false;
    }
    void Print(){
      
        s1.Print();
    }
};
int main(){
    int choice1;
    cout<<"1. Enqueue Operation in O(n)  2. Dequeue Operation in O(n)"<<endl;
    cin>>choice1;
    if(choice1==1){
            queue2 s1;
    int choice;
    do{
    cout<<"1. EnQueue  2. DeQueue  3. Front  4. To check if Empty  5. To check if Full  6. Print 7. Rear  0. End"<<endl;
    cin>>choice;
    switch(choice){
        case 0:{
            cout<<"Exit"<<endl;
            break;
        }
        case 1:{
        cout<<"Enter character"<<endl;
        char d;
        cin>>d;
        s1.enQueue(d);
        break;
        }
        case 2:{
           cout<< s1.deQueue()<<endl;
            break;
        }
        case 3:{
           cout<<s1.Front()<<endl;
            break;
        }
        case 4:{
           if(s1.IsEmpty()){
               cout<<"The Queue is Empty"<<endl;
           }
           else{
               cout<<"The Queue is not Empty"<<endl;
           }
            break;
        }
        case 5:{
            if(s1.IsFull()){
               cout<<"The Queue is Full"<<endl;
               break;
           }     
               cout<<"The Queue is not Full"<<endl;
    
            break;
        }
        case 6:{
            s1.Print();
            break;
        }
        
        case 7:{
            cout<<s1.Rear()<<endl;
            break;
        }
        
        default: cout<<"Error"<<endl;
    }
    }while(choice!=0);
    }
    else{
    queue1 s1;
    int choice;
    do{
    cout<<"1. EnQueue  2. DeQueue  3. Front  4. To check if Empty  5. To check if Full  6. Print 7. Rear  0. End"<<endl;
    cin>>choice;
    switch(choice){
        case 0:{
            cout<<"Exit"<<endl;
            break;
        }
        case 1:{
        cout<<"Enter character"<<endl;
        char d;
        cin>>d;
        s1.enQueue(d);
        break;
        }
        case 2:{
           cout<< s1.deQueue()<<endl;
            break;
        }
        case 3:{
           cout<<s1.Front()<<endl;
            break;
        }
        case 4:{
           if(s1.IsEmpty()){
               cout<<"The Queue is Empty"<<endl;
           }
           else{
               cout<<"The Queue is not Empty"<<endl;
           }
            break;
        }
        case 5:{
            if(s1.IsFull()){
               cout<<"The Queue is Full"<<endl;
           }
           else{
               cout<<"The Queue is not Full"<<endl;
           }
            break;
        }
        case 6:{
            s1.Print();
            break;
        }
        
        case 7:{
            cout<<s1.Rear()<<endl;
            break;
        }
       
        default: cout<<"Error"<<endl;
    }
    }while(choice!=0);
    }
    return 0;
}