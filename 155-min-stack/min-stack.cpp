class MinStack {
public:
    stack <int> st;
    stack <int> minVal;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.size()!=0){minVal.push(min(value,minVal.top()));}
        else{
            minVal.push(value);
        }
        st.push(value);
    }
    
    void pop() {
        if(st.size()!=0 && minVal.size()!=0){
                st.pop();
                minVal.pop();
            }
    }
    
    int top() {
            if(st.size()!=0){
                return st.top();
            }else{
                return NULL;
            }
        
    }
    
    int getMin() {
        if(minVal.size()!=0){
                return minVal.top();
            }else{
                return NULL;
            }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */