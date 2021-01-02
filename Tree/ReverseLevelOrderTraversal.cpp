vector<int> reverseLevelOrder(Node *root)
{
    // code here
    //We can use stack and queue --->dequeue
    //The only changes that are to be made in the normal level order traversal are listed below->{
        // Instead of printing we can puch it into the stack
        //and pushing the right first and then left!!
        stack<Node*>st;
        queue<Node*>q;
        vector<int>v; // o/p
        if(root==NULL)
        {
        v.push_back(0);
        return v;
        }
        q.push(root);
        while(!q.empty())
        {
            Node *curr=q.front();
            st.push(curr);
            if(curr->right!=NULL)
            q.push(curr->right);
            if(curr->left!=NULL)
            q.push(curr->left);
            q.pop();
        }
        while(!st.empty())
        {
            v.push_back(st.top()->data);
            st.pop();
        }
        return v;
}
