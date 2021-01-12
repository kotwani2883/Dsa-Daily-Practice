// return a vector containing the zig zag level order traversal of the given tree
vector <int> zigZagTraversal(Node* root)
{
	// Code here
	vector<int>res;
	stack<Node*>one;
	stack<Node*>two;
	one.push(root);
	bool flag=true;
	while(!one.empty())
	{
	    Node* temp=one.top();
	    one.pop();
	    if(temp)
	    {
	        res.push_back(temp->data);
	        if(flag)
	        {
	            if(temp->left)
	            two.push(temp->left);
	            if(temp->right)
	            two.push(temp->right);
	        }
	        else
	        {
	            if(temp->right)
	            two.push(temp->right);
	            if(temp->left)
	            two.push(temp->left);
	        }
	    }
	    if(one.empty())
	    {
	        flag=!flag;
	        swap(one,two);
	    }
	}
	return res;
}
