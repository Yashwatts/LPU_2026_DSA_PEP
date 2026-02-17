/*
    Tree -> It is a non-linear, hierarchical data structure consisting of nodes connected by edges
                            Level 0         2      <- Root / Node
                                           / \ 
                            Level 1       3   4    <- Child / Node
                                         /     \ 
                            Level 2     5       6  <- Grand Child / Leaf (They don't have further child)
                                        
    Binary Tree -> A tree is a binary tree when every node has at most two children

    Terminologies :-

    1. Leaf -> A node with no children
    2. Internal Node -> A node which is not a leaf
    3. Siblings -> The children of same parent
    4. Length of Path -> Length of path is 1 less than the number of nodes on the path
    5. Ancestors and Descendents -> If there is a path from node A to node B then A is called an ancestor of B and B is called a descendent of A
    6. Subtree -> Any node of a tree, with all of its descendents is a subtree
    7. Level -> The level of the node refers to its distance from the root, the root of the tree has generally level 0
    8. 

*/

#include <iostream>
using namespace std;

class Node{
    int data;
    Node* left;
    Node* right;
};

int main(){

}

// 102, 110, 107, 2583, 199, 513, 104, 404, 100, 226 - Leetcode Questions