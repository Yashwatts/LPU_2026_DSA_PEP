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