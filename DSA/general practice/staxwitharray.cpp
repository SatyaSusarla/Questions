#include <iostream>
using namespace std;
#define n 100
class stack{
    int *arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
     if(top==n-1){
        cout<<"stack overflow"<<endl;
        return;
     }
     top++;
     arr[top]=x;
    }
    bool empty(){
        return top==-1;
    }
    void pop(){
        if(top==-1){
            cout<<"no elements to pop"<<endl;
            return;
        }
        top--;
    }
    void topp(){
        if(top==-1){
            cout<<"no element in stack"<<endl;
            return;
        }
        cout<<"element is "<<arr[top]<<endl;
    }
    void display(){
        int x=top;
        while(x>=0){
            cout<<"element is "<<arr[x]<<endl;
            x--;
        }
    }
};

int main(){
    stack st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.display();
    return 0;
}