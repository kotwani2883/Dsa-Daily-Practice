int maxLen(int A[], int n)
{
    // Your code here
   //If length is not needed to be found then can be easily done using set but for length map is required!!
   
    int   sum{0};
    map<int,int>mp;
    int   ml=0;
    
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(A[i]==0&&ml==0)
        ml=1;
        if(sum==0)
        ml=i+1;
        auto it=mp.find(sum);
        if(it!=mp.end())
        {
            int d=i-mp[sum];
            ml=max(ml,d);
        }
        else
        mp[sum]=i;
        
    }
    return ml;
    
}
