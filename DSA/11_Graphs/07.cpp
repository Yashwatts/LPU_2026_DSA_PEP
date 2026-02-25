// https://www.geeksforgeeks.org/problems/topological-sort/1
// class Solution {
//   public:
//     vector<int> topoSort(int V, vector<vector<int>>& edges) {
//         // code here
        
//         // Compute indegree of every node
//         // Push all the nodes with indegree = 0 in the queue
//         // Remove nodes one by one from queue and add them to your answer
//         // For each removed node, decrease the indegree of its neighbours by 1
//         // If any neighbour becomes indegree = 0, push that in queue
        
//         // Number of visited nodes != number of vertices -> cycle exist
//         vector<vector<int>> adj(V);
//         for(auto &i : edges){
//             int u = i[0];
//             int v = i[1];
//             adj[u].push_back(v);
//         }
//         // Create indegree vector
//         vector<int> indegree(V, 0);
//         for(int i=0; i<V; i++){
//             for(auto j : adj[i]){
//                 indegree[j]++;
//             }
//         }
//         // Push all vertices with indegree 0 in the queue
//         queue<int> q;
//         for(int i=0; i<V; i++){
//             if(indegree[i] == 0) q.push(i);
//         }
//         vector<int> result;
//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             result.push_back(node);
            
//             for(auto neighbour : adj[node]){
//                 indegree[neighbour]--;
                
//                 if(indegree[neighbour] == 0) q.push(neighbour);
//             }
//         }
//         if(result.size() != V) return {};
//         return result;
//     }
// };