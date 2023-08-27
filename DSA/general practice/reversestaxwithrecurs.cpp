#include <iostream>
#include <stack>

using namespace std;
void insertatbottom(stack<int> &st, int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int x=st.top();
st.pop();
insertatbottom(st,ele);
st.push(x);
}
void reverse(stack<int> &st){
if(st.empty()){
    return;
}
int x=st.top();
st.pop();
reverse(st);
insertatbottom(st,x);
}
void display(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
int main(){
stack<int> st;
st.push(4);
st.push(3);
st.push(2);
st.push(1);
display(st);
cout<<"********"<<endl;
reverse(st);
display(st);
return 0;
}