vector<int> kLargest(int arr[], int n, int k)
{
    // code here
    priority_queue<int,vector<int>,greater<int> >pq;
    vector<int>res;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
    
        if(pq.size()>k)
    pq.pop();
    }
    while(pq.empty()!=true)
    {
        int x=pq.top();
        res.push_back(x);
        pq.pop();
    }
     reverse(res.begin(),res.end());
     return res;
    
}
