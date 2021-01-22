/*Author-:Palak*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(ll n)
{
	//Corner case:
	if(n<=1)
	return false;
	if(n<=3)
	return true;

	//This optimizes the complexity:
	if(n%2==0||n%3==0)
	return false;
	for(ll i=5;i*i<=n;i=i+6)
	{
		if(n%i==0||n%(i+2)==0)
		return false;
	}
	return true;
}
vector<string> generate(int N)
{
	// Your code here
	vector<string>st;
	queue<string>q;
	q.push("1");
	while(N--)
	{
	    string s=q.front();
	    q.pop();
	   st.push_back(s);
	    string s1=s;
	    q.push(s.append("0"));
	    q.push(s1.append("1"));
	}
	return st;
}

