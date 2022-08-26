#include <bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
  int mask = 1, count = 0;
  while(mask <= n)
  {
    if((n&mask) != 0)
      count += 1;
    mask <<= 1;
  }
  return count;
}
int main()
{
  int n;
  cin>>n;
  cout<<countSetBits(n);
}
