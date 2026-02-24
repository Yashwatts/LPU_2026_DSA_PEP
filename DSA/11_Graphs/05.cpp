// https://leetcode.com/problems/number-of-provinces/description/
// class Solution {
// public:
//     void dfs(int city, vector<vector<int>>& isConnected, vector<bool> &isVisited){
//         // Mark the current city as visited
//         isVisited[city] = true;

//         for(int neighbour=0; neighbour < isConnected.size(); neighbour++){
//             if(isConnected[city][neighbour] == 1 && !isVisited[neighbour]){
//                 dfs(neighbour, isConnected, isVisited);
//             }
//         }
//     }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n = isConnected.size();
//         vector<bool> isVisited(n, false);
//         int provinceCount = 0;

//         // Loop over all the cities
//         for(int i=0; i<n; i++){
//             if(!isVisited[i]){
//                 dfs(i, isConnected, isVisited);
//                 provinceCount++;
//             }
//         }
//         return provinceCount;
//     }
// };





// https://leetcode.com/problems/flood-fill/description/
// class Solution {
// public:
//     void dfs(vector<vector<int>>& image, int row, int col, int originalColor, int newColor){
//         int n = image.size();
//         int m = image[0].size();

//         if(row < 0 || row >= n || col < 0 || col >= m) return;

//         if(image[row][col] != originalColor) return;

//         image[row][col] = newColor; 

//         // Top
//         dfs(image, row-1, col, originalColor, newColor);

//         // Bottom
//         dfs(image, row+1, col, originalColor, newColor);

//         // Left
//         dfs(image, row, col-1, originalColor, newColor);

//         // Right
//         dfs(image, row, col+1, originalColor, newColor);
//     }
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         int originalColor = image[sr][sc];

//         if(originalColor == color) return image;

//         dfs(image, sr, sc, originalColor, color);

//         return image;
//     }
// };