class MinStack {
public:
    stack<int>minstack ;
    stack<int>st ;
    MinStack() {
        
    }
    
    void push(int val) {
        if(minstack.empty()|| val <= minstack.top()){
            minstack.push(val);
        }
        st.push(val);
    } 
    
    void pop() {
        if(st.empty()){
            return ;
        }
        if(st.top()==minstack.top()){
            minstack.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        if(minstack.empty()){
            return st.top();
        }
        return minstack.top();
    }
};
