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






/*

Cycle Detection in directed graph
1. using DFS
    - We take visited array, adjacency list and a reccursive array to track visited and after return mark again not visited.
    - If in reccursive array the node is visited already after returning then there is cycle.

https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
class Solution {
  public:
    bool dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &recc){
        visited[node] = true;
        recc[node] = true;
        
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                if(dfs(neighbour, adj, visited, recc)) return true;
            }
            else if(recc[neighbour]) return true;
        }
        recc[node] = false;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V);
        for(auto &i : edges){
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
        }
        
        vector<bool> visited(V, false);
        vector<bool> recc(V, false);
        
        for(int i=0; i<V; i++){
            if(!visited[i]){
                if(dfs(i, adj, visited, recc)) return true;
            }
        }
        return false;
    }
};

*/