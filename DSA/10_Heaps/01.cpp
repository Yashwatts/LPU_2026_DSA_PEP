/*

Heaps -> A heap is a Complete Binary Tree that follows the heap order property

    - Complete Binary Tree (CBT) -> All levels are completely filled except the last level, the last level is filled from left to right
    - Heap Order Property:
        1. Max Heap -> Every parent node is greater than or equal to its children
                       The largest element is always at root
        2. Min Heap -> Every parent node is smaller than or equal to its children
                       The smallest element is always to top
        
** Important -> Heap is not a BST


For any node,
0-Based Indexing:
    -> Left Child -> (2 * i)+1
    -> Right Child -> (2 * i)+2
    -> Parent -> (i-1) / 2

1-Based Indexing:
    -> Left Child -> 2 * i
    -> Right Child -> (2 * i)+1
    -> Parent -> i / 2
*/