bool comp(Job a,Job b)
{
    return a.profit>b.profit;
}
pair<int,int> JobScheduling(Job arr[], int n) 
{ 
    // your code here
    pair<int,int>res;
     int a[100]={0};
    int count{0},sum{0};
    sort(arr,arr+n,comp);
    for(int i=0;i<n;i++)
    {
        for(int j=arr[i].dead-1;j>=0;j--)
        {
            if(a[j]==0)
            {
            a[j]=1;
                count++;
                sum=sum+arr[i].profit;
                break;
            }
        }
    }
    res.first=count;
    res.second=sum;
    return res;
    
} 
