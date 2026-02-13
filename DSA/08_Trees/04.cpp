// https://leetcode.com/problems/binary-tree-inorder-traversal/description/
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
//     void inorderHelper(TreeNode* root, vector<int> &result){
//         if(root == NULL) return;
//         inorderHelper(root->left, result);
//         result.push_back(root->val);
//         inorderHelper(root->right, result);
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         // Base Case -> root is null
//         // Left recursive call
//         // Push back vector
//         // Right recursive call
//         vector<int> result;
//         inorderHelper(root, result);
//         return result;
//     }
// };