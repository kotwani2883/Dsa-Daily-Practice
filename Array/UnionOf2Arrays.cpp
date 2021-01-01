#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n],b[m];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        for(ll i=0;i<m;i++)
        cin>>b[i];
        set<ll>s;
        for(int i=0;i<n;i++)
        s.insert(a[i]);
        for(int i=0;i<m;i++)
        s.insert(b[i]);
        cout<<s.size()<<endl;
    }
    return 0;
}
