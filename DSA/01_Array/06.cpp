// // // // // https://www.geeksforgeeks.org/problems/pair-sum-in-a-sorted-and-rotated-array/1
// // // // // // User function Template for C++

// // // // // class Solution {
// // // // //   public:
// // // // //     bool pairInSortedRotated(vector<int>& arr, int target) {
// // // // //         // code here
// // // // //         int n = arr.size();
// // // // //         int pivot = -1;
        
// // // // //         // Find the pivot (The largest element)
// // // // //         for(int i=0; i<n-1; i++){
// // // // //             if(arr[i] > arr[i+1]){
// // // // //                 pivot = i;
// // // // //                 break;
// // // // //         }
// // // // //     }
    
// // // // //     if(pivot == -1){
// // // // //         pivot = n-1;
// // // // //     }
    
// // // // //     int low = (pivot + 1) % n;
// // // // //     int high = pivot;
    
// // // // //     while(low != high){
// // // // //         int sum = arr[low] + arr[high];
// // // // //         if(sum == target) return true;
        
// // // // //         else if(sum < target) low = (low + 1) % n;
        
// // // // //         else high = (high - 1 + n) % n;
// // // // //     }
// // // // //     return false;
    
    
// // // // // }
// // // // // };




// // // // https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
// // // // class Solution {
// // // // public:
// // // //     int firstOccurence(vector<int> &nums, int target){
// // // //         int start = 0;
// // // //         int end = nums.size() - 1;
// // // //         int ans = -1;

// // // //         while(start <= end){
// // // //             // Find mid

// // // //             // If mid is target -> store in ans variable and go left(because we will always find first occurence on left)

// // // //             // else if mid < target -> go right
// // // //             // else go left
// // // //             int mid = (start + end) / 2;
// // // //             if(nums[mid] == target){
// // // //                 ans = mid;
// // // //                 end = mid - 1;
// // // //             }
// // // //             else if(nums[mid] < target) start = mid + 1;
// // // //             else end = mid - 1;
// // // //         }
// // // //         return ans;
// // // //     }

// // // //     int lastOccurence(vector<int> &nums, int target){
// // // //         int start = 0;
// // // //         int end = nums.size() - 1;
// // // //         int ans = -1;

// // // //         while(start <= end){
// // // //             int mid = (start + end) / 2;
// // // //             if(nums[mid] == target){
// // // //                 ans = mid;
// // // //                 start = mid + 1;
// // // //             }
// // // //             else if(nums[mid] < target) start = mid + 1;
// // // //             else end = mid - 1;
// // // //         }
// // // //         return ans;
// // // //     }

// // // //     vector<int> searchRange(vector<int>& nums, int target) {

// // // //         return {firstOccurence(nums, target), lastOccurence(nums, target)};
// // // //     }
// // // // };



// // // https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
// // // class Solution {
// // //   public:
// // //     int firstOccurence(vector<int>& arr, int target){
// // //         int start = 0;
// // //         int end = arr.size() - 1;
// // //         int ans = -1;
        
// // //         while(start <= end){
// // //             int mid = (start + end) / 2;
// // //             if(arr[mid] == target){
// // //                 ans = mid;
// // //                 end = mid - 1;
// // //             }
// // //             else if(arr[mid] < target) start = mid + 1;
// // //             else end = mid - 1;
// // //         }
// // //         return ans;
// // //     }
    
// // //     int lastOccurence(vector<int>& arr, int target){
// // //         int start = 0;
// // //         int end = arr.size() - 1;
// // //         int ans = -1;
        
// // //         while(start <= end){
// // //             int mid = (start + end) / 2;
// // //             if(arr[mid] == target){
// // //                 ans = mid;
// // //                 start = mid + 1;
// // //             }
// // //             else if(arr[mid] < target) start = mid + 1;
// // //             else end = mid - 1;
// // //         }
// // //         return ans;
// // //     }
    
// // //     int countFreq(vector<int>& arr, int target) {
// // //         // code here
// // //         if(lastOccurence(arr, target) >= 0 || firstOccurence(arr, target) >= 0)
// // //         return lastOccurence(arr, target) - firstOccurence(arr, target) + 1;
        
// // //         else return 0;
// // //     }
// // // };





// // // https://leetcode.com/problems/search-insert-position/description/
// // // class Solution {
// // // public:
// // //     int searchInsert(vector<int>& nums, int target) {
// // //         int start = 0;
// // //         int end = nums.size() - 1;
        
// // //         while(start <= end){
// // //             int mid = (start + end) / 2;
// // //             if(nums[mid] == target) return mid;
// // //             else if(nums[mid] < target) start = mid + 1;
// // //             else end = mid - 1;
// // //         }
// // //         return start;
// // //     }
// // // };





// // https://leetcode.com/problems/find-peak-element/description/
// // class Solution {
// // public:
// //     int findPeakElement(vector<int>& nums) {
// //         int start = 0;
// //         int end = nums.size() - 1;

// //         while(start < end){
// //             int mid = (start + end) / 2;

// //             // if mid is less than its next element then peak must be in the right half
// //             if(nums[mid] < nums[mid + 1]) start = mid + 1;
// //             else end = mid;
// //         }
// //         return start;
// //     }
// // };




// https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1
// class Solution {
//   public:
//     int findFloor(vector<int>& arr, int x) {
//         // code here
//         int start = 0;
//         int end = arr.size() - 1;
        
        
//         while(start <= end){
//             int mid = (start + end) / 2;
//             if(arr[mid] > x) end = mid - 1;
//             else start = mid + 1;
//         }
//         return start - 1;
//         
//        // OR
        // int start = 0;
        // int end = arr.size() - 1;
        // int ans = -1;
        
        // while(start <= end){
        //     int mid = (start + end) / 2;
            
        //     if(arr[mid] == x){
        //         ans = mid;
        //         start = mid + 1;
        //     }
        //     else if(arr[mid] < x){
        //         ans = mid;
        //         start = mid + 1;
        //     }
        //     else{
        //         end = mid - 1;
        //     }
        // }
        // return ans;
//     }
// };
