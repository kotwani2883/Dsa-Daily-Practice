//You are required to complete this method
vector<int> levelOrder(Node* node)
{
  //Your code here
  vector<int>v; //vector to store the level order traversal of the tree!!
  //Level order traversal or breadth first traversal can be done using queue data structure
  queue<Node*>q; //Queue is created using Standard template library!!
  if(node==NULL)
 {
     v.push_back(0);
     return v;
 }
  q.push(node);
  while(!q.empty())
  {
      Node *curr=q.front();
      v.push_back(curr->data);
      if(curr->left!=NULL)
      q.push(curr->left);
      if(curr->right!=NULL)
      q.push(curr->right);
      q.pop(); 
      //Queue is basically First in First out data structures!!
  }
  return v;
}
