// https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1
// /*
// class Node {
//   public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// */

// class Solution {
//   public:
//     vector<int> topView(Node *root) {
//         // code here
//         vector<int> result;
        
//         if(root == NULL) return result;
        
//         // We will create a map to store first node at each horizonatal distance
//         // Key -> Horizontal distance (hd)
//         // value -> node value
        
//         map<int, int> topNode;
        
//         // create a queue to store pair of node and hd
//         queue<pair<Node*, int>> q;
        
//         // Start with root at hd -> 0
//         q.push(make_pair(root, 0));
        
//         while(!q.empty()){
//             // extract the front pair
//             pair<Node*, int> frontVal = q.front();
//             q.pop();
            
//             Node* node = frontVal.first;
//             int hd = frontVal.second;
            
//             if(topNode.find(hd) == topNode.end()){
//                 topNode[hd] = node->data;
//             }
//             if(node->left) q.push(make_pair(node->left, hd-1));
//             if(node->right) q.push(make_pair(node->right, hd+1));
//         }
//         for(auto num : topNode){
//             result.push_back(num.second);
//         }
//     }
// };




// https://www.geeksforgeeks.org/problems/k-distance-from-root/1
// /* A binary tree node has data, pointer to left child
//    and a pointer to right child /
// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
// }; */

// class Solution {
//   public:
//     // function should print the nodes at k distance from root
//     vector<int> Kdistance(Node *root, int k) {
//         // Your code here
//         // If root is null -> return empty list
//         // init a queue and push root
//         // track current distance = 0
//         // loop while queue is not empty:
//         //      if current distance == k -> collect all nodes in queue and return
//         //      else process current level:
//         //          traverse current level nodes
//         //          push children to queue
//         //      increment distance
        
//         vector<int> result;
//         if(root == NULL) return result;
        
//         queue<Node*> q;
//         q.push(root);
//         int currentDistance = 0;
        
//         while(!q.empty()){
//             int size = q.size();
//             if(currentDistance == k){
//                 while(!q.empty()){
//                     result.push_back(q.front()->data);
//                     q.pop();
//                 }
//                 break;
//             }
//             while(size--){
//                 Node* node = q.front();
//                 q.pop();
//                 if(node->left) q.push(node->left);
//                 if(node->right) q.push(node->right);
//             }
//             currentDistance++;
//         }
//         return result;
//     }
// };



// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root == NULL) return NULL;

//         if(root == p || root == q) return root;
//         TreeNode* leftLCA = lowestCommonAncestor(root->left, p, q);
//         TreeNode* rightLCA = lowestCommonAncestor(root->right, p, q);

//         if(leftLCA && rightLCA){
//             return root;
//         }
//         else if(leftLCA != NULL) return leftLCA;
//         else return rightLCA;
//     }
// };