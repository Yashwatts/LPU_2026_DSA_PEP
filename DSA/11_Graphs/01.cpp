/*

A Graph G = (V, E) consist of :
V -> Set of Vertices(nodes) -> An individual object in graph
E-> Set of edges connecting pairs of vertices

    - Directed Graph -> Edges have direction
    - Undirected Graph -> Edges have no direction
    - Weighted Graph -> Edges have values (Weight / Cost / Distance)
    - Unweighted Graph -> Edges without values

Path -> A sequence of vertices connected edges
Cycle -> A path that start and end at same vertex
Degree -> In Undirected Graphs -> number of edges connected to a vertex
        In Directed Graphs ->
            - In Degree -> incoming edges
            - Out Degree -> Outgoing edges

Two ways of representation: 
    - unordered_map<int, list<int>> List;
    - 2d Matrix Representation

*/