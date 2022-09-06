#include<bits/stdc++.h>
using namespace std;
int ncr(int n, int r)
{
  vector<vector<int>> dp(n+1);
  for(int i=0; i<=n; i++)
  {
    for(int j=0; j<=i; j++)
    {
      if(j==0 || j==i)
      {
        dp[i].push_back(1);
      }
      else
      {
        dp[i].push_back(dp[i-1][j]+dp[i-1][j-1]);
      }
    }
  }
  return dp[n][r];
}
int main()
{
  int n, r;
  cin>>n>>r;
  cout<<ncr(n, r);
}
