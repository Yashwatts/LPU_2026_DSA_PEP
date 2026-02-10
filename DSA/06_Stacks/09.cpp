// https://leetcode.com/problems/min-stack/description/
// class MinStack {
// public:
//     stack<int> mainStack;
//     stack<int> minStack;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         mainStack.push(val);

//         if(minStack.empty() || val <= minStack.top()){
//             minStack.push(val);
//         }
//         else{
//             minStack.push(minStack.top());
//         }
//     }
    
//     void pop() {
//         mainStack.pop();
//         minStack.pop();
//     }
    
//     int top() {
//         return mainStack.top();
//     }
    
//     int getMin() {
//         return minStack.top();
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */




// https://leetcode.com/problems/implement-stack-using-queues/description/

// By using 2 queues

// class MyStack {
// public:
//     queue<int> q1;
//     queue<int> q2;
//     MyStack() {
        
//     }
    
//     void push(int x) {
//         // Enqueue in q2
//         q2.push(x);

//         // Take all elements from q1, pop them and push in q2
//         while(!q1.empty()){
//             q2.push(q1.front());
//             q1.pop();
//         }

//         // Swap q1 and q2
//         swap(q1, q2);
//     }
    
//     int pop() {
//         int topVal = q1.front();
//         q1.pop();
//         return topVal;
//     }
    
//     int top() {
//         return q1.front();
//     }
    
//     bool empty() {
//         return q1.empty();
//     }
// };

// /**
//  * Your MyStack object will be instantiated and called as such:
//  * MyStack* obj = new MyStack();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->top();
//  * bool param_4 = obj->empty();
//  */




// By using 1 queue

// class MyStack {
// public:
//     queue<int> q;
//     MyStack() {
        
//     }
    
//     void push(int x) {
//         q.push(x);
//         int n = q.size();
//         for(int i=0; i < n-1; i++){
//             q.push(q.front());
//             q.pop();
//         }
//     }
    
//     int pop() {
//         int topVal = q.front();
//         q.pop();
//         return topVal;
//     }
    
//     int top() {
//         return q.front();
//     }
    
//     bool empty() {
//         return q.empty();
//     }
// };

// /**
//  * Your MyStack object will be instantiated and called as such:
//  * MyStack* obj = new MyStack();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->top();
//  * bool param_4 = obj->empty();
//  */