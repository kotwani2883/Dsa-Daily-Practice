bool keypair(vector<int> A, int N, int X)
{
    // Your code goes here
    set<int>s;
    for(int i=0;i<N;i++)
    {
        if(s.find(X-A[i])!=s.end())
        return true;
        s.insert(A[i]);
    }
    return false;
}

