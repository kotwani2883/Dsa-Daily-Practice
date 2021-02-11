class Solution{
public:
int dp[202][202][2];
int solve(string &s ,int i,int j,int istrue)
{
    if(dp[i][j][istrue]!=-1)
        return dp[i][j][istrue];
    if(i>j)
        return dp[i][j][istrue] =  0;
    if(i==j)
    {
        if(istrue==1)
            dp[i][j][istrue] = (s[i]=='T');
        else
            dp[i][j][istrue] = (s[i]=='F');
        
        return dp[i][j][istrue];
    }
    int ans = 0;
    /*
    for(int k=i+1;k<j;k+=2)
        {
            int lt,lf,rt,rf;
            lt = solve(s,i,k-1,1);
            lf = solve(s,i,k-1,0);
            rt = solve(s,k+1,j,1);
            rf = solve(s,k+1,j,0);
            
    */
        for(int k=i+1;k<j;k+=2)
        {
            int lt,lf,rt,rf;
            if(dp[i][k-1][1]!=-1)
                lt = dp[i][k-1][1];
            else
            {
                lt = solve(s,i,k-1,1);
                //dp[i][k-1][1] = lt;
            }

            if(dp[i][k-1][0]!=-1)
                lf = dp[i][k-1][0];
            else
            {
                lf = solve(s,i,k-1,0);
                //dp[i][k-1][0] = lf;
            }

            if(dp[k+1][j][1]!=-1)
                rt = dp[k+1][j][1];
            else
            {
                rt = solve(s,k+1,j,1);
                //dp[k+1][j][1] = rt;
            }

            if(dp[k+1][j][0]!=-1)
                rf = dp[k+1][j][0];
            else
            {
                rf = solve(s,k+1,j,0);
                //dp[k+1][j][0] = rf;
            }
    
    if(s[k] == '|')
    {
      if(istrue == 1)
           ans += lt * rt + lf * rt + lt * rf;
      else
           ans += lf * rf ;
    }

    else if(s[k] == '&')
    {
      if(istrue == 1)
           ans += lt * rt;
      else
           ans += lf * rf + lt * rf + lf * rt;
    }

    else if(s[k] == '^')
    {
      if(istrue == 1)
           ans += lf * rt + lt * rf ;
      else
           ans += lt * rt + lf * rf;
    }
    }
        //dp[i][j][istrue] = ans%1003;
        return dp[i][j][istrue] = ans%1003;
}
    int countWays(int n,string s){
        // code here
        memset(dp,-1,sizeof(dp));
      int ans = solve(s,0,n-1,1);
        return ans;
    }
};
