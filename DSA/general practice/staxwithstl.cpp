#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(20);
    st.push(21);
     st.push(22);
      st.push(23);
st.pop();
st.top();
while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
}
return 0;
}

