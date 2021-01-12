//Balanced Binary Tree/Check for AVL Tress


int isHeightBalance(Node* root, bool& isBalance)
{
    // base case: tree is empty or tree is not balanced
    if (root == nullptr || !isBalance)
        return 0;
 
    // get height of left subtree
    int left_height = isHeightBalance(root->left, isBalance);
 
    // get height of right subtree
    int right_height = isHeightBalance(root->right, isBalance);
 
    // tree is unbalanced if absolute difference between height of
    // its left subtree and right subtree is more than 1
    if (abs(left_height - right_height) > 1)
        isBalance = false;
 
    // return height of subtree rooted at current node
    return max(left_height, right_height) + 1;
}

// This function should return tree if passed  tree 
// is balanced, else false. 
bool isBalanced(Node *root)
{
    //  Your Code here
    bool isBalance=true;
    isHeightBalance(root, isBalance);
    
    return isBalance;
}

