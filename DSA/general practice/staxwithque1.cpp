#include <iostream>
#include <queue>
using namespace std;

class stack{
    int N;
    queue<int> q1;
    queue<int> q2;
       public:
    stack(){
        N=0;
    }
void push(int val){
    q2.push(val);
    N++;
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    queue<int> temp=q1;
    q1=q2;
    q2=temp;
}
void pop(){
    q1.pop();
    N--;
}
int top(){
    return q1.front();
}
int size(){
    return N;
}
void display(){
    while(!q1.empty()){
        cout<<q1.front()<<endl;
        q1.pop();
    }
}
};

int main(){
    stack q;
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.pop();
    q.display();
    return 0;
}