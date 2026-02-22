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
    8. Height -> The maximum level in a tree determines its height. The height of a node in a tree is the length of the longest path from that node to a leaf
    9. Depth -> The depth of a node is the number of nodes along the path from the root to that node

    Properties of BT:
    1-> If h = height of a binary tree, then
        a-> Maximum number of leaves = 2^h
        b-> Maximum number of nodes = 2^(h+1) - 1
    2-> If a binary tree contains m nodes at level 1, it contains at most 2m nodes nodes at level 1 + 1
    3-> Since a binary tree can contain at most 1 node at level 0(root), it can contain at most 2^1 nodes at level 1
    4-> The total number of edges in a full binary tree with n nodes is n - 1


    Types of BT:
    Full Binary Tree -> A tree of height h has all its leaves at level h, means all non leaf nodes of a Full Binary Tree have 2 children and the leaf node have no children
    Complete Binary Tree -> All levels are filled except the last level, the last level should be filled from left to right

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

// 110, 107, 513, 104 - Leetcode Questions