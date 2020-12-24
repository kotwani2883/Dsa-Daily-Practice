bool compare(pair<int,int>a,pair<int,int>b)
{
    if(a.second!=b.second)
    return a.second>b.second;
    else return a.first>b.first;
}

vector<int> TopK(vector<int>& array, int k) 
{
    unordered_map<int,int> mp;
    for(int i=0;i<array.size();i++)
    mp[array[i]]++;
    vector<pair<int,int>>v;
    vector<int>res;
    for(auto it:mp)
        v.push_back(make_pair(it.first,it.second));
        sort(v.begin(),v.end(),compare);
        for(int i=0;i<k;i++)
            res.push_back(v[i].first);
            return res;
}
