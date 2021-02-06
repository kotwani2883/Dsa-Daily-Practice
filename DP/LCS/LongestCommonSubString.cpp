int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        //Bottom up
        int dp[n+1][m+1];
        int res{0};
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0||j==0)
                dp[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(S1[i-1]==S2[j-1])
                {
                dp[i][j]=1+dp[i-1][j-1];
                res=max(res,dp[i][j]);
                }
                else
                dp[i][j]=0;
            }
        }
        return res;
    }
