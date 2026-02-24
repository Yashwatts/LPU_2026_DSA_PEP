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