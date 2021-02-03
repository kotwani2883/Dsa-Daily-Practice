/*This method uses Memoization Technique (an extension of recursive approach).
This method is basically an extension to the recursive approach so that we can overcome the problem of calculating redundant cases and thus increased complexity.
 We can solve this problem by simply creating a 2-D array that can store a particular state (n, w) if we get it the first time.
  Now if we come across the same state (n, w) again instead of calculating it in exponential complexity we can directly return its result stored in the table in constant time.
 This method gives an edge over the recursive approach in this aspect.
*/
//TOP_DOWN APPROACH
#include<bits/stdc++.h>
using namespace std;
int dp[101][1001];
int knapsack(int val[],int wt[],int n,int W)
{
	if(n==0||W==0)
	return 0;
	if(dp[n][W]!=-1)
	return dp[n][W];
	else if(wt[n-1]<=W)
	return dp[n][W]=max(val[n-1]+knapsack(val,wt,n-1,W-wt[n-1]),knapsack(val,wt,n-1,W));
	else if(wt[n-1]>W)
	return dp[n][W]=knapsack(val,wt,n-1,W);
}
int main()
{
	memset(dp,-1,sizeof(dp));
	int val[]={ 60, 100, 120 };
	int wt[]={ 10, 20, 30 };
	int W=50;
	int n=sizeof(val)/sizeof(val[0]);
 cout<<knapsack(val,wt,n,W);
	return 0;
}
/*Complexity Analysis:

Time Complexity: O(N*W).
As redundant calculations of states are avoided.
Auxiliary Space: O(N*W).
The use of 2D array data structure for storing intermediate states-:*/
