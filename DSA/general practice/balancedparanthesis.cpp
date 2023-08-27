#include <iostream>
#include <stack>
using namespace std;
void paranthesis(string s){
stack<char> st;
for(int i=0;i<s.length();i++){
    if(s[i]=='{' || s[i]=='(' || s[i]=='['){
        st.push(s[i]);
    }
    else{
      if(s[i]==']'){
        if(st.top()=='['){
            st.pop();
        }
        else{
           cout<<"paranthesis are not balanced"<<endl;
           return;
        }
      }
      else if(s[i]==')'){
        if(st.top()=='('){
            st.pop();
        }
        else{
           cout<<"paranthesis are not balanced"<<endl;
           return;
        }
      }
      else if(s[i]=='}'){
        if(st.top()=='{'){
            st.pop();
        }
        else{
           cout<<"paranthesis are not balanced"<<endl;
           return;
        }
      }
}
if(st.empty()){
    cout<<"paranthesis are balanced"<<endl;
}
}
}
int main(){
    paranthesis("[]");
    return 0;
}
