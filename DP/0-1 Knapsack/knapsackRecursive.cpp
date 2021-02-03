#include<bits/stdc++.h>
using namespace std;
int knapsack(int val[],int wt[],int n,int W)
{
	//Base Condition
	if(n==0||W==0)
	return 0;
	if(wt[n-1]<=W)
	return max(val[n-1]+knapsack(val,wt,n-1,W-wt[n-1]),knapsack(val,wt,n-1,W));
	else if(wt[n-1]>W)
	return knapsack(val,wt,n-1,W);
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

/*Time Complexity: O(2^n).
As there are redundant subproblems.
Auxiliary Space :O(1).
As no extra data structure has been used for storing values.*/
