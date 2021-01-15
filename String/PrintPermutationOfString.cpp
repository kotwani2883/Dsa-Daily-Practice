#include<bits/stdc++.h>
using namespace std;
#define ll long long 
set<string>st;
void permutation(string s,int low,int high)
{
   
   if(low==high)
   st.insert(s);
   else
   {
       for(int i=low;i<=high;i++)
       {
           swap(s[low],s[i]);
           permutation(s,low+1,high);
           swap(s[low],s[i]);
       }
   }
   
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length()-1;
        permutation(s,0,l);
        for(auto it:st)
        cout<<it<<" ";
        cout<<endl;
        st.clear();
    }
    return 0;
}
