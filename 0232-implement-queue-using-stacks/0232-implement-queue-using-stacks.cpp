class MyQueue {
public:
    queue<int>s;
    MyQueue() {
    }
    
    void push(int x) {
        s.push(x);

    }
    
    int pop() {
        int c=s.front();
        s.pop();
        return c;
    }
    
    int peek() {
        int c=s.front();
        return c;
    }
    
    bool empty() {
        if(s.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */