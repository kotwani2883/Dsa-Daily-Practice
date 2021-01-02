int height(Node* node)
{
    if(node==NULL)
    return 0;
    return 1+max(height(node->left),height(node->right));
}

/* Computes the diameter of binary tree with given root.  */
int diameter(Node* root) {
    // Your code here
    if(root==NULL)
    return 0;
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    
    int leftDiameter=diameter(root->left);
    int rightDiameter=diameter(root->right);
    
    return max(leftHeight+rightHeight+1,max(leftDiameter,rightDiameter));
}
