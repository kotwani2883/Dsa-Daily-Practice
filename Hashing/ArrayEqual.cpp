bool check(vector<ll> arr, vector<ll> brr, int n) {
    //code here
    ll res=arr[0];
    for(ll i=1;i<n;i++)
    res^=arr[i];
    for(ll i=0;i<n;i++)
    res^=brr[i];
    if(res==0)
    return true;
    else
    return false;
}
