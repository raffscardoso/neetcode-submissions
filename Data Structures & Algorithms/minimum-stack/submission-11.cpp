using namespace std;
class MinStack {
public:
    stack<int> stk;
    MinStack() {
    }
    
    void push(int val) {
        stk.push(val);
        
    }
    
    void pop() {
        stk.pop();
        
    }
    
    int top() {
        return stk.top();
        
    }
    
    int getMin() {
        stack<int> tmp;
        int num = stk.top();
        while(!stk.empty()){
            num = min(stk.top(), num);
            tmp.push(stk.top());
            stk.pop();
        }


        while(!tmp.empty()){
            int val = tmp.top();
            tmp.pop();
            stk.push(val);
        }

        return num;

        
    }
};
