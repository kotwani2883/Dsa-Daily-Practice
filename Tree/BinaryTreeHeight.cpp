class Solution{
    public:
    int height(struct Node* node){
        // code here 
      if(node==NULL)
      return 0;
      int leftHeight=height(node->left);
      int rightHeight=height(node->right);
      return max(leftHeight,rightHeight)+1;
    }
};
