// https://www.geeksforgeeks.org/problems/height-of-binary-tree/1
// /*
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     int height(Node* root) {
//         // code here
//         if(root == NULL) return -1;
//         int lh = height(root->left);
//         int rh = height(root->right);
        
//         return 1 + max(lh, rh);
//     }
// };




// https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1
// /* A binary tree node has data, pointer to left child
//    and a pointer to right child
// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int x){
//         data = x;
//         left = right = NULL;
//     }
// }; */

// // Function to return a list containing the level order traversal in spiral form.
// class Solution {
//   public:
//     int sumBT(Node* root) {
//         // code here
//         if(root == NULL) return 0;
        
//         int ls = sumBT(root->left);
//         int rs = sumBT(root->right);
        
//         return root->data + ls + rs;
//     }
// };



// https://leetcode.com/problems/sum-of-left-leaves/description/
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
//     int sumOfLeftLeaves(TreeNode* root) {
//         if(root == NULL) return 0;
//         int sum = 0;

//         if(root->left && root->left->left == NULL && root->left->right == NULL){
//             sum+= root->left->val;
//         }
//         sum += sumOfLeftLeaves(root->left);
//         sum += sumOfLeftLeaves(root->right);

//         return sum;
//     }
// };




// https://leetcode.com/problems/same-tree/description/
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
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if(p == NULL && q == NULL) return true;
//         if(p == NULL || q == NULL) return false;

//         if(p->val != q->val) return false;

//         return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//     }
// };




// https://leetcode.com/problems/invert-binary-tree/description/
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
//     TreeNode* invertTree(TreeNode* root) {
//         if(root == NULL) return NULL;

//         TreeNode* leftTree = invertTree(root->left);
//         TreeNode* rightTree = invertTree(root->right);

//         root->left = rightTree;
//         root->right = leftTree;

//         return root;
//     }
// };




// https://leetcode.com/problems/binary-tree-level-order-traversal/description/
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
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> result;
//         if(root == NULL) return result;
//         queue<TreeNode*> q;
//         q.push(root);
        
//         while(!q.empty()){
//             int levelSize = q.size();
//             vector<int> levelElements;

//             for(int i=0; i<levelSize; i++){
//                 TreeNode* frontNode = q.front();
//                 q.pop();

//                 levelElements.push_back(frontNode->val);

//                 if(frontNode->left) q.push(frontNode->left);
//                 if(frontNode->right) q.push(frontNode->right);
//             }
//             result.push_back(levelElements);
//         }
//         return result;
//     }
// };