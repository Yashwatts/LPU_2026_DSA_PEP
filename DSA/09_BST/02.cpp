// https://leetcode.com/problems/search-in-a-binary-search-tree/description/
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//         if(root == NULL || root->val == val) return root;

//         if(root->val < val){
//             return searchBST(root->right, val);
//         }
//         else{
//             return searchBST(root->left, val);
//         }
//     }
// };




// https://leetcode.com/problems/range-sum-of-bst/description/
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         if(root == NULL) return 0;
//         int sum = 0;
//         if(root->val >= low && root->val <= high) sum+= root->val;
//         if(root->val > low){
//             sum += rangeSumBST(root->left, low, high);
//         }
//         if(root->val < high){
//             sum += rangeSumBST(root->right, low, high);
//         }
//         return sum;
//     }
// };



// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* buildBST(vector<int>& nums, int l, int r){
//         if(l > r) return NULL;
//         int mid = l+(r-l) / 2;

//         TreeNode* root = new TreeNode(nums[mid]);
//         root->left = buildBST(nums, l, mid-1);
//         root->right = buildBST(nums, mid+1, r);

//         return root;
//     }
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         // Find mid element
//         // Make nums[mid] the curr node
//         // Recursively build-
//             // LST -> nums[l] .... mid-1
//             // RST -> nums[mid+1] ..... r
//             // return ...

//         return buildBST(nums, 0, nums.size()-1);
//     }
// };