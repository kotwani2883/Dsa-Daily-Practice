//Bottom view
// Method that returns the bottom view.
vector <int> bottomView(Node *root)
{
   // Your Code Here
   vector<int>v;
    if(root==NULL)
{ v.push_back(0);
    return v;
}
    queue<pair<Node*,int> >q;
   map<int, int>mp;
   mp.clear();
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<Node*,int>p=q.front();
        Node* n=p.first;int val=p.second;
        q.pop();
        if(mp.find(val)==mp.end()||mp.find(val)!=mp.end())
        {
            mp[val]=n->data;
           
        }
        if(n->left)
        q.push(make_pair(n->left, val-1));
        if(n->right)
         q.push(make_pair(n->right, val+1));
    }
    for(auto it:mp)
    v.push_back(it.second);
    return v;
}

