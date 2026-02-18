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