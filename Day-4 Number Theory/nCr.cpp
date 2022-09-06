#include<bits/stdc++.h>
using namespace std;
vector <vector<int>> ncr(int n, int r)
{
  vector<vector<int>> dp(n+1);
  for(int i=0; i<=n; i++)
  {
    for(int j=0; j<=i; j++)
    {
      if(j==0 || j==i)
      {
        dp[i][j].push_back(1);
      }
      else
      {
        dp[i][j].push_back(dp[i-1][j]+dp[i-1][j-1]);
      }
    }
  }
}
int main()
{
  int n, r;
  cin>>n>>r;
  vector<vector<int>> dp = ncr(n, r);
}
