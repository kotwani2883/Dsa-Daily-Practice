//Subarray with the given sum:-
/*Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.*/

vector<int> subarraySum(int arr[], int n, int s){
    
    // Your code here
    vector<int>v;
    int sum=arr[0];
    int j{0};
    for(int i=1;i<=n;i++)
    {
        
        while(sum>s&&j<i-1)
        {
            sum-=arr[j];
            j++;
        }
        if(sum==s)
        {
            v.push_back(j+1);
            v.push_back(i);
            return v;
        }
        if(i<n)
        sum+=arr[i];
        
    }
    v.push_back(-1);
    return v;
}
