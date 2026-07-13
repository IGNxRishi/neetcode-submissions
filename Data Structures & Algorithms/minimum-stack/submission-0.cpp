class MinStack {
public:
    stack<int>st ; 
    int minval ;

    MinStack() {
        minval = INT_MAX ; 
    }
    
    void push(int val) {
        minval = min(minval , val );
        st.push(val);
    }
    
    void pop() {
        if(st.empty()){
            return ;
        }
        if(st.top()==minval){
            st.pop();
            minval = INT_MAX ; 

            stack<int>s2 ; 
            while(!st.empty()){
                minval = min(minval , st.top());
                s2.push(st.top());
                st.pop();
            }
            while(!s2.empty()){
                st.push(s2.top());
                s2.pop();
            }
        }else{
            st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minval ;
    }
};
