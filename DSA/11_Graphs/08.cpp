// https://leetcode.com/problems/rotting-oranges/description/
// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();

//         queue<pair<int, int>> q; // queue to store rotten orange position

//         int freshCount = 0;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(grid[i][j] == 2) q.push({i, j});

//                 else if(grid[i][j] == 1) freshCount++;
//             }
//         }
//         if(freshCount == 0) return 0;
//         int minutes = -1;
//         int changedRow[4] = {-1, 1, 0, 0};
//         int changedCol[4] = {0, 0, -1, 1};
//         while(!q.empty()){
//             int size = q.size();
//             minutes++;
            
//             for(int i=0; i<size; i++){
//                 pair<int, int> curr = q.front();
//                 q.pop();

//                 int row = curr.first;
//                 int col = curr.second;
                
//                 for(int j=0; j<4; j++){
//                     int newRow = row + changedRow[j];
//                     int newCol = col + changedCol[j];

//                     if(newRow >= 0 && newRow < n && newCol >=0 && newCol < m && grid[newRow][newCol] == 1){
//                         grid[newRow][newCol] = 2;
//                         q.push({newRow, newCol});

//                         freshCount--;
//                     }
//                 }
//             }
//         }
//         if(freshCount > 0) return -1;
//         return minutes;
//     }
// };




// https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph/1
// // User function Template for C++
// class Solution {
//   public:
//     void dfs(int node, vector<vector<pair<int, int>>> &adj, vector<int> &visited, stack<int> &st){
//         visited[node] = 1;
        
//         for(auto &i : adj[node]){
//             int neighbour = i.first;
//             if(!visited[neighbour]){
//                 dfs(neighbour, adj, visited, st);
//             }
//         }
//         // after visited all neighbours, push current node into stack (from here i cannot go further to any neighbour)
//         st.push(node);
//     }
//     vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
//         // code here
//         vector<vector<pair<int, int>>> adj(V);
//         for(int i=0; i<E; i++){
//             int u = edges[i][0];
//             int v = edges[i][1];
//             int w = edges[i][2];
//             adj[u].push_back({v, w});
//         }
//         vector<int> visited(V, 0);
//         stack<int> st;
        
//         for(int i=0; i<V; i++){
//             if(!visited[i]){
//                 dfs(i, adj, visited, st);
//             }
//         }
//         vector<int> dist(V, INT_MAX);
//         dist[0] = 0;
        
//         while(!st.empty()){
//             int node = st.top();
//             st.pop();
            
//             if(dist[node] != INT_MAX){
//                 for(auto &edge : adj[node]){
//                     int neighbour = edge.first;
//                     int weight = edge.second;
                    
//                     if(dist[node] + weight < dist[neighbour]){
//                         dist[neighbour] = dist[node] + weight;
//                     }
//                 }
//             }
//         }
//         for(int i=0; i<V; i++){
//             if(dist[i] == INT_MAX){
//                 dist[i] = -1;
//             }
//         }
//         return dist;
//     }
// };

// OR

// https://www.naukri.com/code360/problems/shortest-path-in-dag_8381897?leftPanelTabValue=PROBLEM 
// void dfs(int node, vector<vector<pair<int, int>>> &adj, vector<int> &visited, stack<int> &st){
//     visited[node] = 1;

//     for(auto &i : adj[node]){
//         int neighbour = i.first;
//         if(!visited[neighbour]){
//             dfs(neighbour, adj, visited, st);
//         }
//     }
//     // after visited all neighbours, push current node into stack (from here i cannot go further to any neighbour)
//     st.push(node);
// }

// vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &edges)
// {
//     // Write your code here
//     vector<vector<pair<int, int>>> adj(n);
//     for(int i=0; i<m; i++){
//         int u = edges[i][0];
//         int v = edges[i][1];
//         int w = edges[i][2];
//         adj[u].push_back({v, w});
//     }
//     vector<int> visited(n, 0);
//     stack<int> st;

//     for(int i=0; i<n; i++){
//         if(!visited[i]){
//             dfs(i, adj, visited, st);
//         }
//     }
//     vector<int> dist(n, INT_MAX);
//     dist[0] = 0;

//     while(!st.empty()){
//         int node = st.top();
//         st.pop();

//         if(dist[node] != INT_MAX){
//             for(auto &edge : adj[node]){
//                 int neighbour = edge.first;
//                 int weight = edge.second;

//                 if(dist[node] + weight < dist[neighbour]){
//                     dist[neighbour] = dist[node] + weight;
//                 }
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         if(dist[i] == INT_MAX){
//             dist[i] = -1;
//         }
//     }
//     return dist;
// }