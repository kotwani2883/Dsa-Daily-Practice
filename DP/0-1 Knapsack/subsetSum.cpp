//Subset Sum Problem
/*Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.
Based on knapsack Problem.Here consider wt array analogous to arr ans W to sum given here
*/
#include<bits/stdc++.h>
using namespace std;
int dp[101][1001];
bool subsetSum(int arr[],int n,int sum)
{
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
			if(i==0)
			dp[i][j]=false;
			if(j==0)
			dp[i][j]=true;
			else if(arr[i-1]<=j)
			return dp[i][j]=(dp[i-1][j-arr[i-1]]||dp[i-1][j]) ;//max here is replaced by or as we are dealing wuth boolean values
			else
			return dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][sum];
}
int main()
{
	int arr[] = { 3, 34, 4, 12, 5, 2 }; 
    int sum = 1; 
    int n = sizeof(arr) / sizeof(arr[0]);
	cout<<subsetSum(arr,n,sum); 
	return 0;
}
//Time complexity is exponential
