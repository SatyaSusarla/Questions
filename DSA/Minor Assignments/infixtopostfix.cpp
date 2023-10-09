#include <iostream>
#include <climits>
#include <ctype.h>
#define n 100
using namespace std;

class stack{
    char arr[n];
    int top;
    public:
    stack(){
        top=-1;
    }
    void push(char x){
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
    char topp(){
        if(top==-1){
            cout<<"no element in stack"<<endl;
            exit(0);
        }
     return arr[top];
    }
    void display(){
        char x=top;
        while(x>=0){
            cout<<"element is "<<arr[x]<<endl;
            x--;
        }
    }
};
int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/' || c=='%'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixtopostfix(string s){
    stack st;
    string res;
    for(int i=0;i<s.length();i++){
        if((isdigit(s[i]) ||isalpha(s[i]) || s[i]=='.')){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.topp()!='('){
                res+=st.topp();
                st.pop();
            }
           if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(st.topp())>=prec(s[i])){
                res+=st.topp();
                st.pop();
            }
            st.push(s[i]);
          
        }
    }
      while(!st.empty()){
                res+=st.topp();
                st.pop();
            }
    return res;
}
int main(){
    string s;
    cout<<"Enter the Infix expression"<<endl;
    cin>>s;
    cout<<"The Postfix expression is : "<<infixtopostfix(s)<<endl;
    return 0;
}