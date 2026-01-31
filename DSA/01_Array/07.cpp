// https://leetcode.com/problems/move-zeroes/description/
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int count = 0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i] != 0 && count > 0){
//                 nums[i-count] = nums[i];
//                 nums[i] = 0;
//             } else if(nums[i] == 0){
//                 count++;
//             }
//         }
//     }
// };


// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int left = 0;
//         int right = numbers.size()-1;

//         while(left < right){
//             if(numbers[left] + numbers[right] == target) return {left+1, right+1};
//             else if(numbers[left] + numbers[right] < target) left++;
//             else right--;
//     }
//     return {};
// }
// };



// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int low = prices[0];
//         int high = 0;
//         for(int i=1; i<prices.size(); i++){
//             if(prices[i] < low) low = prices[i];
//             else high = max(high, prices[i] - low);
//         }
//         return high;
//     }
// };



// https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
// class Solution {
//   public:
//     bool hasTripletSum(vector<int> &arr, int target) {
//         // Code Here
//         sort(arr.begin(), arr.end());
//         int n = arr.size();
//         for(int i=0; i<n-2; i++){
//             int j = i+1;
//             int k = n-1;
//             while(j < k){
//                 int sum = arr[i] + arr[j] + arr[k];
//                 if(sum == target) return true;
//                 else if(sum < target) j++;
//                 else k--;
//             }
//         }
//         return false;
//     }
// };



