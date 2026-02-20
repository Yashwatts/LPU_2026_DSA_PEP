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