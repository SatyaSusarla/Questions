#include <iostream>
using namespace std;
#define n 100
class que{
    int* arr;
    int front;
    int back;
    public:
    que(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front==-1 || front>back){
            cout<<"no elements in the queue"<<endl;
            return;
        }
        front++;
    }
    void peek(){
         if(front==-1 || front>back){
            cout<<"no elements in the queue"<<endl;
            return ;
        }
        cout<<arr[front]<<endl;
    }
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
    }
    void display(){
        int x=front;
        int y=back;
        for(int i=x;i<=y;i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main(){
    que q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.display();
    return 0;
}