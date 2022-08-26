#include <bits/stdc++.h>
using namespace std;
int unSetithBit(int n, int i)
{
  return n & (~(1<<i));
}
int main()
{
  int n, i;
  cin>>n>>i;
  cout<<unSetithBit(n, i-1);
}
