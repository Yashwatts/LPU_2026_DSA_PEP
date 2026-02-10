// 1. Operand -> Append in string
// 2. ( -> push in stack
// 3. ) -> Pop from stack to string until (
// 4. Operators -> pop while the top of stack has "GREATER OR EQUAL PRECEDENCE, THEN PUSH"

// https://www.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1
// class Solution {
//   public:
//     int precedence(char c){
//         if(c == '^') return 3;
//         if(c == '*' || c == '/') return 2;
//         if(c == '+' || c == '-') return 1;
//         return -1;
//     }
//     string infixToPostfix(string& s) {
//         // code here
//         // 1. Operand -> Append in string
//         // 2. ( -> push in stack
//         // 3. ) -> Pop from stack to string until (
//         // 4. Operators -> pop while the top of stack has "GREATER OR EQUAL PRECEDENCE, THEN PUSH"
        
//         stack<char> st;
//         string ans = "";
//         for(char c : s){
//             if(isalnum(c)) ans += c;
//             else if(c == '(') st.push(c);
//             else if(c == ')'){
//                 while(!st.empty() && st.top() != '('){
//                     ans += st.top();
//                     st.pop();
//                 }
//                 st.pop();
//             } 
//             else{
//                 while(!st.empty() && precedence(st.top()) >= precedence(c) && !(c == '^' && st.top() == '^')){
//                     ans += st.top();
//                     st.pop();
//                 }
//                 st.push(c);
//             }
//         }
//         while(!st.empty()){
//             ans += st.top();
//             st.pop();
//         }
//         return ans;
//     }
// };
