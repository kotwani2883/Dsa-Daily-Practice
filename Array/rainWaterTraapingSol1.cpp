int trappingWater(int arr[], int n){

    // Your code here
    int leftarr[n],rightarr[n];
    leftarr[0]=arr[0],rightarr[n-1]=arr[n-1];
    for(int i=1;i<n;i++)
    leftarr[i]=max(leftarr[i-1],arr[i]);
    for(int i=n-2;i>=0;i--)
    rightarr[i]=max(rightarr[i+1],arr[i]);
    int total{0};
    for(int i=0;i<n;i++)
    total+=min(rightarr[i],leftarr[i])-arr[i];
    return total;
}
