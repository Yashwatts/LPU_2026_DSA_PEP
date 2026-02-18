// https://www.geeksforgeeks.org/problems/predecessor-and-successor/0
// /* BST Node
// class Node {
//    public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int x){
//         data = x;
//         left = NULL;
//         right = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     // Predecessor -> The node with the largest value < key
//     // Successor -> The node with the smallest value > key
    
//     // To find predecessor ->
//     // if curr node value < key
//     //     this node can be a possible predecessor
//     //     but something larger and still < key might exist in right subtree of this current node
    
//     pair<Node*, Node*> findPredSucc(Node* root, int key){
//         Node* pre = NULL;
//         Node* suc = NULL;
//         Node* node = root;
        
//         // search for the key and track a potential pre/suc
//         while(node!=NULL){
//             if(key < node->data){
//                 // curr node is greater than key - possible successor
//                 suc = node;
//                 node = node->left;
//             }
//             else if(key > node->data){
//                 pre = node;
//                 node = node->right;
//             }
//             else{
//                 break;
//             }
//         }
//         // If we have found the node with the given key
//         if(node != NULL && node->left != NULL){
//             // Find pre (max of LST)
//             Node* temp = node->left;
//             while(temp->right != NULL){
//                 temp = temp->right;
//             }
//             pre = temp;
//         }
        
//         // Find the suc (min of RST)
//         if(node != NULL && node->right != NULL){
//             Node* temp = node->right;
//             while(temp->left != NULL){
//                 temp = temp->left;
//             }
//             suc = temp;
//         }
//         return {pre, suc};
//     }
    
//     vector<Node*> findPreSuc(Node* root, int key) {
//         // code here
//         pair<Node*, Node*> ans = findPredSucc(root, key);
//         return {ans.first, ans.second};
//     }
// };




// https://leetcode.com/problems/delete-node-in-a-bst/description/
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
//     // Step 1 -> Find the node to be deleted by comparisons
//     // Step 2 -> Restructure its children while preserving BST order
//         // There can be 3 cases for deleting a node
//             // Case 1 -> No Child (Leaf Node) -> this can be deleted directly
//             // Case 2 -> One Child -> Replace the current node with its only child
//             // Case 3 -> Two Children - > To maintain the BST order, we can either choose inorder successor (smallest value in RST) or inorder predecessor (largest value in LST) and replace with current node 

//     TreeNode* inorderSucc(TreeNode* node){
//         while(node->left != NULL){
//             node = node->left;
//         }
//         return node;
//     }
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(root == NULL) return NULL;

//         if(key < root->val){
//             root->left = deleteNode(root->left, key);
//         }
//         else if(key > root->val){
//             root->right = deleteNode(root->right, key);
//         }
//         else{
//             // Case 1 : Node has no left child
//             // In this replace the node with its right child
//             if(root->left == NULL){
//                 TreeNode* temp = root->right;
//                 delete root;
//                 return temp;
//             }
//             // Case 2 : Node has no right child
//             // In this replace the node with its left child
//             else if(root->right == NULL){
//                 TreeNode* temp = root->left;
//                 delete root;
//                 return temp;
//             }
            
//             // Case 3 : Node has 2 children
//             // Find inorder successor
//             TreeNode* temp = inorderSucc(root->right);

//             // Copy the inorder Successor (min element) value in the node which we were supposed to delete
//             root->val = temp->val;

//             // Delete the successor from the RST (as we have already copied the value)
//             root->right = deleteNode(root->right, temp->val);
//         }
//         return root;
//     }
// };