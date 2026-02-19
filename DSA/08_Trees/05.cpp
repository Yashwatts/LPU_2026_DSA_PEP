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