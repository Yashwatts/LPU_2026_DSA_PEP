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




// https://www.geeksforgeeks.org/problems/queue-reversal/1
// class Solution {
//   public:
//     void reverseQueue(queue<int> &q) {
//         // code here
//         if(q.empty()) return;
        
//         int x = q.front();
//         q.pop();
//         reverseQueue(q);
//         q.push(x);
//     }
// };





// https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
// class Solution {
//   public:
//     queue<int> reverseFirstK(queue<int> q, int k) {
//         // code here
//         stack<int> st;
        
//         if(k > q.size()) return q;
        
//         // Run a loop for k elements and push them in a stack
//         for(int i=0; i < k; i++){
//             st.push(q.front());
//             q.pop();
//         }
        
//         // Run a loop until stack is empty and push all elements back in queue
//         while(!st.empty()){
//             q.push(st.top());
//             st.pop();
//         }
        
//         // Run a loop till size - k, pop all the elements of queue and push them back in queue again
//         int n = q.size();
//         for(int i=0; i < n-k; i++){
//             q.push(q.front());
//             q.pop();
//         }
//         return q;
//     }
// };




// https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1
// class Solution {
//   public:
//     void rearrangeQueue(queue<int> &q) {
//         // code here
//         queue<int> q1;
//         queue<int> q2;
//         int n = q.size() / 2;
        
//         for(int i=0; i<n; i++){
//             q1.push(q.front());
//             q.pop();
//         }
//         while(!q.empty()){
//             q2.push(q.front());
//             q.pop();
//         }
//         for(int i=0; i<n; i++){
//             q.push(q1.front());
//             q1.pop();
//             q.push(q2.front());
//             q2.pop();
//         }
//     }
// };


// Another Solution


// class Solution {
//   public:
//     void usingStack(queue<int> &q, stack<int> st1, stack<int> st2){
//         if(st1.empty() && st2.empty()) return;
        
//         int x = st1.top();
//         int y = st2.top();
//         st1.pop();
//         st2.pop();
//         usingStack(q, st1, st2);
//         q.push(x);
//         q.push(y);
//     }
//     void rearrangeQueue(queue<int> &q) {
//         // code here
//         stack<int> st1;
//         stack<int> st2;
//         int n = q.size() / 2;
        
//         for(int i=0; i<n; i++){
//             st1.push(q.front());
//             q.pop();
//         }
//         while(!q.empty()){
//             st2.push(q.front());
//             q.pop();
//         }
//         usingStack(q, st1, st2);
//     }
// };


// Another Solution


// class Solution {
//   public:
//     // 11 12 13 14 15 16 17 18 19 20
//     void rearrangeQueue(queue<int> &q) {
//         // code here
//         stack<int> st;
//         int halfSize = q.size() / 2;
        
//         // Push first half elements into the stack
//         // queue : 16 17 18 19 20 || stack : 15 14 13 12 11
//         for(int i=0; i<halfSize; i++){
//             st.push(q.front());
//             q.pop();
//         }
//         // Enqueue back the stack elements
//         // queue : 16 17 18 19 20 15 14 13 12 11
//         while(!st.empty()){
//             q.push(st.top());
//             st.pop();
//         }
//         // dequeue the first half elements of queue and enqueue them back
//         // queue : 15 14 13 12 11 16 17 18 19 20
//         for(int i=0; i<halfSize; i++){
//             q.push(q.front());
//             q.pop();
//         }
        
//         // Again push the first half elements in stack
//         // queue : 16 17 18 19 20 || stack : 11 12 13 14 15
//         for(int i=0; i<halfSize; i++){
//             st.push(q.front());
//             q.pop();
//         }
//         // Interleave the elements of queue and stack
//         // queue : 11 16 12 17 13 18 14 19 15 20
//         while(!st.empty()){
//             q.push(st.top());
//             st.pop();
//             q.push(q.front());
//             q.pop();
//         }
//     }
// };







// https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1
// class Solution {
//   public:
//     vector<int> nextLargerElement(vector<int>& arr) {
//         // code here
//         int n = arr.size();
//         stack<int> st;
//         vector<int> ans(n);
        
//         for(int i=n-1; i>=0; i--){
//             // Remove all elements smaller than or equal to current element
//             while(!st.empty() && st.top() <= arr[i]){
//                 st.pop();
//             }
//             if(st.empty()){
//                 ans[i] = -1;
//             }
//             else{
//                 ans[i] = st.top();
//             }
//             st.push(arr[i]);
//         }
//         return ans;
//     }
// };