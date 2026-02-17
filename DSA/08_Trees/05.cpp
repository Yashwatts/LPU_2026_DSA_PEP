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