//Bottom-up Approach-Table making
#include<bits/stdc++.h>
using namespace std;
int t[101][1001];
int knapsack(int val[],int wt[],int n,int W)
{
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		t[i][j]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
			if(wt[i-1]<=W)
			t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
			else if(wt[i-1]>W)
			t[i][j]=t[i-1][j];
		}
	}
	return t[n][W];
}

int main()
{
	int val[]={ 60, 100, 120 };
	int wt[]={ 10, 20, 30 };
	int W=50;
	int n=sizeof(val)/sizeof(val[0]);
 cout<<knapsack(val,wt,n,W);
	return 0;
}
/*Complexity Analysis:

Time Complexity: O(N*W).
where ‘N’ is the number of weight element and ‘W’ is capacity. As for every weight element we traverse through all weight capacities 1<=w<=W.
Auxiliary Space: O(N*W).
The use of 2-D array of size ‘N*W’.*/
