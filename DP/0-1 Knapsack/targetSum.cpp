//TARGET SUM PROBLEM
/*Number of ways to calculate a target number using only array elements
Given an integer array, find number of ways to calculate a target number using only array elements and addition or subtraction operator.
This problem is exactly similar to count of subsetSum with given difference.
The problem is similar to 0-1 Knapsack Problem where for every item, we either pick the complete item, or don’t pick it at all (0-1 property).
The idea remains the same here i.e. we either include the current digit or ignore it.
If we include the current digit, we subtract or add it from remaining target and recurse for remaining digits with new target.
If target reaches 0, we increment the count.
 If we have processed all elements of the array and target is not reached, count remains unchanged.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> arr = { -3, 1, 3, 5, 7 }; 
	// target number 
    int k = 6; 
    targetSum(arr,k);
}
