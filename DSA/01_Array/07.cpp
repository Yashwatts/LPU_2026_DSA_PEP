// https://leetcode.com/problems/maximum-subarray/
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {

//         // Kadane's Algorithm

//         int currSum = 0;
//         int maxSum = nums[0];

//         for(int i=0; i<nums.size(); i++){
//             currSum += nums[i];
//             if(currSum > maxSum) maxSum = currSum;
//             if(currSum < 0) currSum = 0;
//         }
//         return maxSum;
//     }
// };



// https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1
// class Solution {
//   public:
//     void reverseInGroups(vector<int> &arr, int k) {
//         // code here
//         int n = arr.size();
        
//         for(int i=0; i<n; i+=k){
//             int start = i;
//             int end = min(i + k - 1, n- 1);
            
//             while(start < end){
//                 swap(arr[start++], arr[end--]);
//             }
//         }
//     }
// };



// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
// class Solution {
//   public:
//     int maxSubarraySum(vector<int>& arr, int k) {
//         // code here
//         int currSum = 0;
//         int n = arr.size();
        
//         for(int i=0; i<k; i++){
//             currSum += arr[i];
//         }
//         int maxSum = currSum;
        
//         for(int i=k; i<n; i++){
//             currSum = currSum - arr[i - k] + arr[i];
//             if(currSum > maxSum) maxSum = currSum;
//         }
//         return maxSum;
//     }
// };



// https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/submissions/1899596025/
// class Solution {
// public:
//     int minSwaps(vector<int>& nums) {
//         int n = nums.size();
//         int totalOnes = 0;
//         // Find total ones
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i] == 1) totalOnes++;
//         }

//         // Initialize a window of size of totalOnes starting from beginning

//         int currentOnes = 0;
//         for(int i=0; i<totalOnes; i++){
//             if(nums[i] == 1){
//                 currentOnes++;
//             }
//         }
//         int maxOnes = currentOnes;

//         for(int i = totalOnes; i < n + totalOnes; i++){
//             currentOnes -= (nums[(i-totalOnes) % n]);

//             currentOnes += nums[(i) % n];

//             maxOnes = max(maxOnes, currentOnes);
//         }
//         return totalOnes - maxOnes;
//     }
// };


// https://leetcode.com/problems/koko-eating-bananas