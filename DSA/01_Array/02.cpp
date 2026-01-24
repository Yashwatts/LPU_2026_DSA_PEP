// https://www.geeksforgeeks.org/problems/reverse-an-array/1
// class Solution {
//   public:
//     void reverseArray(vector<int> &arr) {
//         // code here
//         int i = 0;
//         int j = arr.size()-1;
        
//         while(i < j){
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//     }
// };



// https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
// class Solution {
//   public:
//     bool isSorted(vector<int>& arr) {
//         // code here
//         for(int i=0; i<arr.size()-1; i++){
//             if(arr[i+1] < arr[i]) return false;
//         }
//         return true;
//     }
// };



// https://www.geeksforgeeks.org/problems/sum-of-array2326/1
// // User function template for C++
// class Solution {
//   public:
//     // Function to return sum of elements
//     int arraySum(vector<int>& arr) {
//         // code here
//         int sum = 0;
//         for(int i=0; i<arr.size(); i++){
//             sum += arr[i];
//         }
//         return sum;
//     }
// };


// https://leetcode.com/problems/running-sum-of-1d-array/submissions/1894075176/
// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         for(int i=1; i<nums.size(); i++){
//             nums[i] = nums[i] + nums[i-1];
//         }
//         return nums;
//     }
// };


// https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
// class Solution {
//   public:
//     int largest(vector<int> &arr) {
//         // code here
//         int largest = 0;
//         for(int i=0; i<arr.size(); i++){
//             if(arr[i] > largest) largest = arr[i];
//         }
//         return largest;
//     }
// };


// https://www.geeksforgeeks.org/problems/second-largest3735/1
// class Solution {
//   public:
//     int getSecondLargest(vector<int> &arr) {
//         // code here
//         int largest = INT_MIN, s_largest = INT_MIN;
        
//         for(int i : arr){
//             if(i > largest){
//                 s_largest = largest;
//                 largest = i;
//             }
//             else if(i > s_largest && i < largest){
//                 s_largest = i;
//             }
//         }
//         return s_largest == INT_MIN ? -1 : s_largest;
//     }
// };



// https://leetcode.com/problems/max-consecutive-ones/description/
// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int count = 0;
//         int count2 = 0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i] == 1) count++;
//             else{
//                 if(count>count2) count2 = count;
//                 count = 0;
//             }
//         }
//         if(count>count2) count2 = count;
//         return count2;
//     }
// };
