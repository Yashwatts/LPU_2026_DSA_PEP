// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
// class Solution {
//   public:
//     vector<int> bfs(vector<vector<int>> &adj) {
//         // code here
//         int V = adj.size();
//         vector<int> bfsResult;
//         vector<bool> visited(V, false);
//         queue<int> q;
        
//         // Start BFS from Node 0
//         q.push(0);
//         visited[0] = true;
        
//         while(!q.empty()){
//             int front = q.front();
//             q.pop();
//             bfsResult.push_back(front);
            
//             for(auto neighbour : adj[front]){
//                 if(!visited[neighbour]){
//                     q.push(neighbour);
//                     visited[neighbour] = true;
//                 }
//             }
//         }
//         return bfsResult;
//     }
// };




// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
// class Solution {
//   public:
//     void dfsHelper(int node, vector<vector<int>>& adj, vector<bool> &visited, vector<int> &result){
//         visited[node] = true;
//         result.push_back(node);
        
//         for(auto neighbour : adj[node]){
//             if(!visited[neighbour]){
//                 dfsHelper(neighbour, adj, visited, result);
//             }
//         }
//     }
//     vector<int> dfs(vector<vector<int>>& adj) {
//         // Code here
//         int V = adj.size();
//         vector<bool> visited(V, false);
//         vector<int> result;
        
//         dfsHelper(0, adj, visited, result);
//         return result;
//     }
// };