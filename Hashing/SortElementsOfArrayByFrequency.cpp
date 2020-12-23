bool sortbysec(pair<int,int> a, pair<int,int> b)
{
    if(a.second!=b.second) return a.second>b.second;
    else return a.first<b.first;
}
vector<int> sortByFreq(int arr[],int n)
{
    //Your code here
   vector<int>res;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++) m[arr[i]]++; //Storing frequency of each element
    vector<pair<int,int>> v;
    for(auto it=m.begin();it!=m.end();it++)
        v.push_back(make_pair(it->first,it->second));
    sort(v.begin(),v.end(),sortbysec);//Sort by second element!!
    for(auto it=v.begin();it!=v.end();it++)
    {
        int k=it->second;
        while(k--) res.push_back(it->first);
    }
    return res;
}
     
