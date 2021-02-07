#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        //Similar to number of insertions to make a string Palindrome!!
        //No of deletion=No of Insertion
      
      string b = string(a.rbegin(),a.rend()); //Reverses the string!!
        int m=a.length();
        int dp[m+1][m+1];
        for(int i=0;i<=m;i++)
        {
        for(int j=0;j<=m;j++)
        {
        if(i==0||j==0)
         dp[i][j]=0;
        }
        }
       
        for(int i=1;i<=m;i++){
            for(int j=1;j<=m;j++){
                if(a[i-1]==b[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
       
        int res=m-dp[m][m];
        cout<<res<<endl;
    }
    return 0;
}
