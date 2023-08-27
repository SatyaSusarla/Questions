#include <iostream>
#include <stack>
using namespace std;

class queue{
    stack<int> s1;
    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        int x=s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item=pop();
        s1.push(x);
        return item;
    }
    void display(){
        while(!s1.empty()){
            cout<<s1.top()<<endl;
            s1.pop();
        }
    }
};

int main(){
    queue q;
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.pop();
    q.display();
    return 0;

}