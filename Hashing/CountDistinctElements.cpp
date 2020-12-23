
//Window Slding used!!
vector <int> countDistinct (int A[], int n, int k)
{
    vector<int>result;
    //code here.
   map<int,int>mp;
   int distinctCount{};
    for(int i=0;i<k;i++)
   {
       if(mp[A[i]]==0)
       distinctCount++;
       mp[A[i]]+=1;
   }
   result.push_back(distinctCount);
   for(int i=k;i<n;i++)
   {
   if(mp[A[i-k]]==1)
   distinctCount--;
   mp[A[i-k]]-=1;
   if(mp[A[i]]==0)
   distinctCount++;
   mp[A[i]]=mp[A[i]]+1;
   result.push_back(distinctCount);
   }
   return result;
   
}
