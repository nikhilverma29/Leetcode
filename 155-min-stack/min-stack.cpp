class MinStack {
    private:
    stack<int> minstack;
    stack<int> mainstack;

public:
    MinStack() {
        
    }
    
    void push(int value) {
        mainstack.push(value);
        if(minstack.empty()){
            minstack.push(value);
        }
        else{
            minstack.push(min(value, minstack.top()));
        }
    }
    
    void pop() {
        minstack.pop();
        mainstack.pop();
    }
    
    int top() {
        return mainstack.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};

