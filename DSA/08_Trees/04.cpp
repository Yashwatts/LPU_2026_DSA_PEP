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



// https://leetcode.com/problems/binary-tree-preorder-traversal/description/
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
//     void preorderHelper(TreeNode* root, vector<int> &result){
//         if(root == NULL) return;

//         result.push_back(root->val);
//         preorderHelper(root->left, result);
//         preorderHelper(root->right, result);
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> result;
//         preorderHelper(root, result);
//         return result;
//     }
// };



// https://leetcode.com/problems/binary-tree-postorder-traversal/description/
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
//     void postorderHelper(TreeNode* root, vector<int> &result){
//         if(root == NULL) return;

//         postorderHelper(root->left, result);
//         postorderHelper(root->right, result);
//         result.push_back(root->val);
//     }
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> result;
//         postorderHelper(root, result);
//         return result;
//     }
// };