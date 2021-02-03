//Partition problem
/*Partition problem is to determine whether a given set can be partitioned into two subsets such that the sum of elements in both subsets is same.*/
//Based on subset Sum 
//The array can be divided completely into two parts only am\nd only when the sum is even,NOw the problem reducest o equal sum partiition
#include<bits/stdc++.h>
using namespace std;
bool equalSumPartition(int arr[],int n,int sum)
{
	bool dp[n+1][sum+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
	{
		if(i==0)
		dp[i][j]=false;
		if(j==0)
		dp[i][j]=true;
	}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(arr[i-1]<=j)
			dp[i][j]=(dp[i-1][j-arr[i-1]]||dp[i-1][j]);
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][sum];
}
int main()
{
	int arr[] = {3, 1, 5, 9, 12};  
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum{};
    for(int i=0;i<n;i++)
    sum+=arr[i];
    if(sum%2!=0)
    cout<<0;
    else
    {
    	int  k=sum/2;
    	cout<<equalSumPartition(arr,n,k);
	}
	return 0;
}
