vector<int> rightView(Node *root)
{
   // Your Code here
   vector<int>v;
   if(root==NULL)
   return v;
   queue<Node*>q;
   q.push(root);
   while(q.empty()==false)
   {
       int s=q.size();
       for(int i=1;i<=s;i++) //Level order traversal using queue
       {
           Node*temp=q.front();
           q.pop();
           if(i==1)//First node seen on right side!!
           v.push_back(temp->data);
           if(temp->right)
           q.push(temp->right);
           if(temp->left)
           q.push(temp->left);
       }
   }
   return v;
}
