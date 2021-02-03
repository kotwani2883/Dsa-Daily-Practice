/*Partition a set into two subsets such that the difference of subset sums is minimum
Given a set of integers, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum.
If there is a set S with n elements, then if we assume Subset1 has m elements, Subset2 must have n-m elements and the value of abs(sum(Subset1) – sum(Subset2)) should be minimum.
Since in this questiom we have 2 unknmown variables s1 and s2 we need to convert into single unknown variable applying method of range
range here is defined as the sum of all the elements of the set/array;
and then applying subset sum on this range thus elimunating many other elemts in this range
*/
#include<bits/stdc++.h>
using namespace std;
vector<int>v1;
int  minSubsetDiff(int arr[],int n,int range)
{
	bool dp[n+1][range+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=range;j++)
		{
			if(i==0)
			dp[i][j]=false;
			if(j==0)
			dp[i][j]=true;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=range;j++)
		{
			 if(arr[i-1]<=j)
			dp[i][j]=(dp[i-1][j-arr[i-1]]||dp[i-1][j]);
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	for(int j=1;j<=range/2;j++)
	{
		if(dp[n][j]==true)//dp[n][j]==1
		v1.push_back(j);
	}
	/*for(int i=0;i<=n;i++)
	{
	for(int j=0;j<=range;j++)
	{
		cout<<dp[i][j]<<" ";
	}
	cout<<endl;
}*/
	/*for(int i=0;i<v1.size();i++)
	cout<<v1[i]<<endl;*/
	int mini=INT_MAX;
	for(int i=0;i<v1.size();i++)
		mini=min(mini,range-2*v1[i]);
		return mini;
}
int main()
{
 int arr[] = {10};
	 int n=sizeof(arr)/sizeof(arr[0]);
	 int sum{};
	 for(int i=0;i<n;i++)
	 sum+=arr[i];
  cout<<minSubsetDiff(arr,n,sum);
	 return 0;
}
