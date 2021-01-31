int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int sum=arr[0],maxi=arr[0];
    for(int i=1;i<n;i++)
    {
       maxi=max(maxi+arr[i],arr[i]);
       sum=max(maxi,sum);
    }
    return sum;
    
}
/*A-2
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int sum=0,maxi=arr[0];
    for(int i=0;i<n;i++)
    {
       sum+=arr[i];
       
      maxi=max(maxi,sum);
      if(sum<0)
      sum=0;
      
    }
    return maxi;
    
}
*/
