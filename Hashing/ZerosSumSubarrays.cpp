ll findSubarray(vector<ll> arr, int n ) {
    //code here
  unordered_map<ll,ll>mp;
    ll sum{0},count{0};
    for(ll i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0)
        count++;
         if(mp.find(sum)!=mp.end())
        count+=mp[sum];
       mp[sum]++;
    }
    return count;
}

