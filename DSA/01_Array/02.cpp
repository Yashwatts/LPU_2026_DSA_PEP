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