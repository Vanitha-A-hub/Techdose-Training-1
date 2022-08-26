#include <bits/stdc++.h>
using namespace std;
int checkithBit(int n, int i)
{
  return (n&(1<<(i-1))) != 0;
}
int main()
{
  int n, i;
  cin>>n>>i;
  checkithBit(n, i) == 1 ? cout<<"Yes" : cout<<"No";
}
