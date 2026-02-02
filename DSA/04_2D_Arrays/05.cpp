// https://www.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1
// class Solution {
//   public:
//     vector<int> boundaryTraversal(vector<vector<int>>& mat) {
//         // code here
//         int topRow = 0;
//         int bottomRow = mat.size() - 1;
//         int leftCol = 0;
//         int rightCol = mat[0].size() - 1;
//         vector<int> ans;
        
//         // Print Top Row
//         for(int i = leftCol; i <= rightCol; i++){
//             ans.push_back(mat[topRow][i]);
//         }
//         topRow++;

//         // Print Right Column
//         for(int i = topRow; i <= bottomRow; i++){
//             ans.push_back(mat[i][rightCol]);
//         }
//         rightCol--;

//         // Print Bottom Row
//         for(int i = rightCol; i >= leftCol; i--){
//             ans.push_back(mat[bottomRow][i]);
//         }
//         bottomRow--;

//         // Print Left Column
//         for(int i = bottomRow; i >= topRow; i--){
//             ans.push_back(mat[i][leftCol]);
//         }
//         leftCol++;
        
//         return ans;
//     }
// };