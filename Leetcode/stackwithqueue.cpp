class MyStack {
public:
    queue <int> q1;
    queue <int> q2;
public:
    MyStack() {
    
    }
    
    void push(int x) {
    while(q1.size()>0){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(q2.size()>0){
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
       
    }
    
    bool empty() {
     
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
