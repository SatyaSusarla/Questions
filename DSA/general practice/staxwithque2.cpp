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
    void pop(){
        if(q1.empty()){
            return;
        }
        while(q1.size() !=1){
            q2.push(q1.front());
            q1.pop();
        }
       q1.pop();
       N--;
       queue<int> temp=q1;
       q1=q2;
       q2=temp;
    }
    void push(int val){
     q1.push(val);
     N++;
    }
    int top(){
        if(q1.empty()){
            return -1;
        }
        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q2.push(ans);
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
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