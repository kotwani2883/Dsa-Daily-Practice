int findLongestConseqSubseq(int arr[], int n)
{
    //Your code here
    set<int>s;
    for(int i=0;i<n;i++)
    s.insert(arr[i]);
    int count{0};
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i]-1)==s.end())
        {
            int j=arr[i];
            int count{1};
            while(s.find(j+1)!=s.end())
            {
                 count++;
                 j++;
            }
            maxi=max(maxi,count);
        }
    }
    return maxi;
}
