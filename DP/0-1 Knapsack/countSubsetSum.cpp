//Count of subsets with sum equal to X
/*Given an array arr[] of length N and an integer X, the task is to find the number of subsets with sum equal to X.
*/
#include<bits/stdc++.h>
using namespace std;
int findCnt(int arr[],int n,int x)
{
	int dp[n+1][x+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=x;j++)
		{
			if(i==0)
			dp[i][j]=0;
			if(j==0)
			dp[i][j]=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=x;j++)
		{
			if(arr[i-1]<=j)
			dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][x];
}
int main()
{
	 int arr[] = { 3, 3, 3, 3 }; 
    int n = sizeof(arr) / sizeof(int); 
    int x = 6; 
    cout<<findCnt(arr,n,x);
    return 0;
	
}
