int maxDistance(int arr[], int n)
{
//Code here
map<int,int>mp;
for(int i=0;i<n;i++)
    if(mp.find(arr[i])==mp.end())
        mp.insert({arr[i],i});
        
        int maxi=INT_MIN,d{0};
    for(int i=n-1;i>=0;i--)
    {
        if(mp.find(arr[i])!=mp.end())
        {
       auto it= mp.find(arr[i]);
     it->second=i-mp[arr[i]];
     d=it->second;
        }
        if(d>maxi)
        maxi=d;
    }
    
return maxi;
    
    
}
