#include <bits/stdc++.h>
using namespace std;
int leastPower(int n)
{
  while(n && (n&(n-1)))
  {
    n = n&(n-1);
  }
  return n;
}
int main()
{
  int n;
  cin>>n;
  cout<<leastPower(n);
}
