/ A wrapper over leftViewUtil()
vector<int> leftView(Node *root)
{
   // Your code here
    vector<int>v;
   if(root==NULL)
   {
       
       return v;
   }
  
  queue<Node*>q;
  q.push(root);
  while(q.empty()==false)
  {
      int s=q.size();
      for(int i=1;i<=s;i++)
      {
          Node *temp=q.front();
          q.pop();
          if(i==1)
          v.push_back(temp->data);
          if(temp->left!=NULL)
          q.push(temp->left);
          if(temp->right!=NULL)
          q.push(temp->right);
      }
  }
  return v;
}

