// https://www.naukri.com/code360/problems/delete-middle-element-from-stack_985246?leftPanelTabValue=PROBLEM
// #include <bits/stdc++.h> 
// void deleteFromStack(stack<int>&inputStack, int count, int size){
//    if(inputStack.empty() || count == size / 2){
//       inputStack.pop();
//       return;
//    }
//    int temp = inputStack.top();
//    inputStack.pop();
//    deleteFromStack(inputStack, count + 1, size);
//    inputStack.push(temp);
// }
// void deleteMiddle(stack<int>&inputStack, int N){
	
//    // Write your code here
//    int count = 0;
//    deleteFromStack(inputStack, count, N);
// }



// https://leetcode.com/problems/valid-parentheses/
// class Solution {
// public:
//     bool isValid(string s) {
//         // Create a stack
//         // Iterate on string s and check for opening type of bracket
//         // If found then push in the stack
//         // Else compare the top element with the s[i], if same then pop the top

//         stack<char> st;
//         for(int i=0; i<s.length(); i++){
//             if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
//                 st.push(s[i]);
//             }
//             else{
//                 if(st.empty()) return false;

//                 char top = st.top();
//                 if((s[i] == ')' && top == '(') || (s[i] == '}' && top == '{') || (s[i] == ']' && top == '[')){
//                     st.pop();
//                 }
//                 else return false;
//             }
//         }
//         return st.empty();
//     }
// };