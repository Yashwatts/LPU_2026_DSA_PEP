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