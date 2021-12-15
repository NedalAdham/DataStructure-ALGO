int LCM_DP (string s1 ,string s2)
{
    int m = s1.size();
    int n = s2.size();

    int dp[m+1][m+1];
    for (int i = 0; i <=m ; ++i) {
        for (int j = 0; j <=n ; ++j) {
            if (i == 0 || j == 0)dp[i][j]=0;
            else if(s1[i] == s2[j])dp[i][j] = dp[i-1][j-1] + 1 ;
            else dp[i][j] = max (dp[i-1][j] , dp[i][j-1]);
        }
    }
    return dp[n][m];
}
int main ()
{
cout << LCM_DP("apple" , "apple");
}