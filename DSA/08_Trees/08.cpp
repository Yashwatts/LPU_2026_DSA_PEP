// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/
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
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         vector<vector<int>> result;

//         if(root == NULL) return result;
//         // Outer map -> for hd (automatically sorts the hd -> left to right)
//         // Inner map -> for level (automatically sorts level -> top to bottom)
//         map<int, map<int, multiset<int>>> nodes;

//         // Each element in queue stores -> Treenode* -> the curr node, int(hd), int(depth)
//         queue<pair<TreeNode*, pair<int, int>>> q;

//         q.push(make_pair(root, make_pair(0, 0)));

//         while(!q.empty()){
//             pair<TreeNode*, pair<int, int>> temp = q.front();
//             q.pop();

//             TreeNode* node = temp.first;
//             int hd = temp.second.first;
//             int level = temp.second.second;

//             nodes[hd][level].insert(node->val);

//             // If left exists -> hd will be -1 and level will be +1
//             if(node->left){
//                 q.push(make_pair(node->left, make_pair(hd-1, level+1)));
//             }
//             // If right exists -> hd will be +1 and level will be +1
//             if(node->right){
//                 q.push(make_pair(node->right, make_pair(hd+1, level+1)));
//             }
//         }
//         for(auto &i : nodes){
//             vector<int> columnAns;
//             for(auto &levelPair : i.second){
//                 for(auto values : levelPair.second){
//                     columnAns.push_back(values);
//                 }
//             }
//             result.push_back(columnAns);
//         }
//         return result;
//     }
// };