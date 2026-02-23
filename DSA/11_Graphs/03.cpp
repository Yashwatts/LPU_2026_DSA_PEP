// Undirected Weighted Graph

#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

int main(){
    int n; // Number of vertices 
    int m; // Number of edges

    cout << "Number of Vertices : ";
    cin >> n;
    cout << "Number of Edges : ";
    cin >> m;

    unordered_map<int, list<pair<int, int>>> adjList;
    cout << "Enter edges (u,v, weight) : " << endl;

    for(int i=0; i<m; i++){
       int u, v, w;
       cin >> u >> v >> w;
       
       adjList[u].push_back({v, w});
       adjList[v].push_back({u, w}); // Comment this line if Directed Weighted Graph
    }
    cout << "Adjacency List : " << endl;

    for(auto i : adjList){
        cout << i.first << " -> ";
        for(auto j : i.second){
            cout << "(" << j.first << ", " << j.second << ") "; 
        }
        cout << endl;
    }
}