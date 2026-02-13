/*
                                        1     <- Root
                                       / \
                                      2   3
                                     / \ / \
                                    4  5 6  7

Traversals: DFS (Depth First Search) & BFS (Breadth First Search)

DFS: Inorder, Preorder, Postorder

Inorder -> <Left> <Root> <Right>
    inorder(root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root;
    inorder(root->right);
    }
    Output: 4, 2, 5, 1, 6, 3, 7

Preorder -> <Root> <Left> <Right>
    preorder(root){
    if(root == NULL) return;
    cout << root;
    preorder(root->left);
    preorder(root->right);
    }
    Output: 1, 2, 4, 5, 3, 6, 7
Postorder -> <Left> <Right> <Root>
    postorder(root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root;
    }

*/