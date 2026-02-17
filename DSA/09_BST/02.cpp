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



// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
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
//     TreeNode* buildBST(vector<int>& nums, int l, int r){
//         if(l > r) return NULL;
//         int mid = l+(r-l) / 2;

//         TreeNode* root = new TreeNode(nums[mid]);
//         root->left = buildBST(nums, l, mid-1);
//         root->right = buildBST(nums, mid+1, r);

//         return root;
//     }
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         // Find mid element
//         // Make nums[mid] the curr node
//         // Recursively build-
//             // LST -> nums[l] .... mid-1
//             // RST -> nums[mid+1] ..... r
//             // return ...

//         return buildBST(nums, 0, nums.size()-1);
//     }
// };



// https://leetcode.com/problems/insert-into-a-binary-search-tree/description/
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
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         if(root == NULL) return new TreeNode(val);
//         if(root->val < val){
//             root->right = insertIntoBST(root->right, val);
//         }
//         if(root->val > val){
//             root->left = insertIntoBST(root->left, val);
//         }
//         return root;
//     }
// };



// https://www.geeksforgeeks.org/problems/minimum-element-in-bst/0
// /*
// class Node {
//   public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int x) {
//         data = x;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// */

// class Solution {
//   public:
//     int minValue(Node* root) {
//         // code here
//         if(root == NULL) return -1;
//         // while(root->left != NULL){
//         //     root = root->left;
//         // }
//         // return root->data;
        
//         if(root->left == NULL) return root->data;
        
//         return minValue(root->left);
//     }
// };



// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/
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
//     void inorder(TreeNode* root, vector<int>& result){
//         if(root==NULL) return;
//         inorder(root->left, result);
//         result.push_back(root->val);
//         inorder(root->right, result);
//     }
//     bool findTarget(TreeNode* root, int k) {
//         vector<int> result;
//         inorder(root, result);

//         int p1 = 0;
//         int p2 = result.size() - 1;
//         while(p1 < p2){
//             if(result[p1] + result[p2] == k) return true;
//             else if(result[p1] + result[p2] < k) p1++;
//             else p2--;
//         }
//         return false;
//     }
// };



// https://leetcode.com/problems/kth-smallest-element-in-a-bst/
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
//     void inorder(TreeNode* root, vector<int>& result){
//         if(root == NULL) return;
//         inorder(root->left, result);
//         result.push_back(root->val);
//         inorder(root->right, result);
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> result;
//         inorder(root, result);

//         int ksmall = result[k-1];
//         return ksmall;
//     }
// };


// Another Answer

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
//     int count = 0;
//     int ans = 0;
//     void inorder(TreeNode* root, int k){
//         if(root == NULL) return;
//         inorder(root->left, k);
//         count++;
//         if(count == k) ans += root->val;
//         inorder(root->right, k);
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         inorder(root, k);
//         return ans;
//     }
// };





// https://leetcode.com/problems/validate-binary-search-tree/
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
//     bool validate(TreeNode* root, long long min, long long max){
//         // If node is null
//         // If node->val <= min OR >= max ->false
//         // recursively validate:
//         //      LST(min, node->val);
//         //      RST(node->val, max);
//         // If both are true then only return true

//         if(root == NULL) return true;
//         if(root->val <= min || root->val >= max) return false;
//         return validate(root->left, min, root->val) && validate(root->right, root->val, max);
//     }
//     bool isValidBST(TreeNode* root) {
//         return validate(root, LONG_MIN, LONG_MAX);
//     }
// };