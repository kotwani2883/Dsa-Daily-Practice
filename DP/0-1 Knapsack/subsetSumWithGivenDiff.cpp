//COUNT SUBSET WITH THE GIVEN DIFFERENCE
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int diff=1;
	int sum{};
	for(int i=0;i<n;i++)
	sum+=arr[i];
	int s=(diff+sum)/2;
	//this prroblem is reduced to count number of subsets with given sum ,here s is analogous to sum;
}
