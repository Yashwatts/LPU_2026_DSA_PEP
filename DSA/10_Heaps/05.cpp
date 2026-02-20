// https://leetcode.com/problems/kth-largest-element-in-an-array/description/
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int, vector<int>, greater<int>> pq_min;

//         for(int i : nums){
//             pq_min.push(i);

//             if(pq_min.size() > k) pq_min.pop();
//         }

//         return pq_min.top();
//     }
// };




// https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
// class Solution {
//   public:
//     int kthSmallest(vector<int> &arr, int k) {
//         // code here
//         priority_queue<int> pq;
        
//         for(int i : arr){
//             pq.push(i);
            
//             if(pq.size() > k) pq.pop();
//         }
//         return pq.top();
//     }
// };



// https://www.geeksforgeeks.org/problems/k-largest-elements4206/1
// class Solution {
//   public:
//     vector<int> kLargest(vector<int>& arr, int k) {
//         // Your code here
//         priority_queue<int, vector<int>, greater<int>> pq_min;
//         vector<int> ans(k);
        
//         for(int i : arr){
//             pq_min.push(i);
            
//             if(pq_min.size() > k) pq_min.pop();
//         }
        
//         while(!pq_min.empty()){
//             ans[k-1] = pq_min.top(); 
//             k--;
//             pq_min.pop();
//         }
//         return ans;
//     }
// };