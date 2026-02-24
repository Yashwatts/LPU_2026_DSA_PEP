/*

Cycle Detection in undirected graph
1. using BFS
    - We take visited array, queue, adjacency list and a map to keep track of child->parent
    - If I'm visiting the node from a parent and visiting again through different parent then there is cycle

https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
class Solution {
  public:
    bool bfs(int start, vector<vector<int>>& adj, vector<bool> &visited){
        queue<int> q;
        unordered_map<int, int> parent; // <child, parent>
        
        visited[start] = true;
        q.push(start);
        parent[start] = -1;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(int neighbour : adj[node]){
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    q.push(neighbour);
                    parent[neighbour] = node; // Set Parent of neighbour
                }
                else if(parent[node] != neighbour) return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        
        for(auto &i : edges){
            int u = i[0];
            int v = i[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> visited(V, false);
        for(int i=0; i<V; i++){
            if(!visited[i]){
                if(bfs(i, adj, visited)) return true;
            } 
        }
        return false;
    }
};




2. Using DFS (Recursive)
    - We take visited array, adjacency list and a map to keep track of child->parent
    - If I'm visiting the node from a parent and visiting again through different parent then there is cycle

https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
class Solution {
  public:
    bool dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, unordered_map<int, int> &parent){
        visited[node] = true;
        
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                parent[neighbour] = node;
                if(dfs(neighbour, adj, visited, parent)) return true;
            }
            else if(parent[node] != neighbour) return true;
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        for(auto &i : edges){
            int u = i[0];
            int v= i[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(V, false);
        for(int i=0; i<V; i++){
            if(!visited[i]){
                unordered_map<int, int> parent;
                parent[i] = -1;
                if(dfs(i, adj, visited, parent)) return true;
            }
        }
        return false;
    }
};

*/