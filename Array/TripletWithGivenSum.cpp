//Tripet with the given sum
/*Author-:Palak*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n{},sum{};
   cin>>n>>sum;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
  ll flag{0};
    for(ll i=0;i<n-2;i++)
    {
       int low=i+1,high=n-1;
       while(low<high)
       {
           if(a[i]+a[low]+a[high]==sum)
           {
               cout<<1<<endl;
               flag=1;
               break;
           }
           else if(a[i]+a[low]+a[high]<sum)
           low++;
           else
           high--;
       }
       if(flag==1)
       break;
    }
    if(flag!=1)
    cout<<0<<endl;
}
    return 0;
}
