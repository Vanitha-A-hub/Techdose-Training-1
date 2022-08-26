#include <bits/stdc++.h>
using namespace std;
int flipithBit(int n, int i)
{
  return (n^(1<<i));
}
int main()
{
  int n, i;
  cin>>n>>i;
  cout<<flipithBit(n, i-1);
}
