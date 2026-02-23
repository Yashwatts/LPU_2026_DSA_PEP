// Undirected Graph

#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

int main(){
    int n; // Number of vertices
    int m; // Number of edges
    
    cout << "Enter the number of vertices : ";
    cin >> n;
    cout << "Enter the number of edges : ";
    cin >> m;

    unordered_map<int, list<int>> adjList;
    cout << "Enter Edges (u, v) : " << endl;
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;

        adjList[u].push_back(v);
        adjList[v].push_back(u); // For Directed Graph Comment This Line
    }
    cout << "Adjacency List : " << endl;

    for(auto i : adjList){
        cout << i.first << " -> ";
        for(auto j : i.second){
            cout << j << " ";
        }
        cout << endl;
    }
}