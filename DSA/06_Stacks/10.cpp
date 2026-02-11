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




// https://www.geeksforgeeks.org/problems/previous-smaller-element/1
// class Solution {
//   public:
//     vector<int> prevSmaller(vector<int>& arr) {
//         //  code here
//         stack<int> st;
//         int n = arr.size();
//         vector<int> ans(n);
        
//         for(int i=0; i<n; i++){
//             while(!st.empty() && st.top() >= arr[i]){
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



// https://www.geeksforgeeks.org/problems/immediate-smaller-element1142/1
// class Solution {
//   public:
//     vector<int> nextSmallerEle(vector<int>& arr) {
//         //  code here
//         int n = arr.size();
//         vector<int> ans(n);
//         stack<int> st;
        
//         for(int i = n-1; i>=0; i--){
//             while(!st.empty() && st.top() >= arr[i]){
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




// https://www.geeksforgeeks.org/problems/previous-greater-element/1
// class Solution {
//   public:
//     vector<int> preGreaterEle(vector<int>& arr) {
//         //  code here
//         int n = arr.size();
//         vector<int> ans(n);
//         stack<int> st;
        
//         for(int i=0; i<n; i++){
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



// https://leetcode.com/problems/next-greater-element-i/
// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         int n = nums2.size();
//         unordered_map<int, int> mp;
//         stack<int> st;

//         for(int i=n-1; i>=0; i--){
//             while(!st.empty() && st.top() <= nums2[i]){
//                 st.pop();
//             }
//             if(st.empty()){
//                 mp[nums2[i]] = -1; 
//             }
//             else{
//                 mp[nums2[i]] = st.top();
//             }
//             st.push(nums2[i]);
//         }
//         vector<int> ans;
//         for(int i=0; i<nums1.size(); i++){
//             ans.push_back(mp[nums1[i]]);
//         }
//         return ans;
//     }
// };




// https://leetcode.com/problems/largest-rectangle-in-histogram/description/
// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size();
//         stack<int> st;

//         vector<int> left(n);
//         vector<int> right(n);

//         // Find the previous smaller
//         for(int i = 0; i < n; i++){
//             while(!st.empty() && heights[st.top()] >= heights[i]){
//                 st.pop();
//             }
//             if(st.empty()){
//                 left[i] = -1;
//             }
//             else{
//                 left[i] = st.top();
//             }
//             st.push(i);
//         }

//         while(!st.empty()) st.pop();

//         // Find next smaller
//         for(int i=n-1; i>=0; i--){
//             while(!st.empty() && heights[st.top()] >= heights[i]){
//                 st.pop();
//             }
//             if(st.empty()){
//                 right[i] = n;
//             }
//             else{
//                 right[i] = st.top();
//             }
//             st.push(i);
//         }
        
//         // Calculate max area
//         int maxArea = 0;
//         for(int i=0; i<n; i++){
//             int height = heights[i];
//             int width = right[i] - left[i] - 1;
//             int area = height * width;
//             maxArea = max(maxArea, area);
//         }
//         return maxArea;
//     }
// };