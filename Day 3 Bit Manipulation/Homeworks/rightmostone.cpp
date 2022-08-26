#include <bits/stdc++.h>
using namespace std;
int rightMostOne(int n)
{
  int position = 1;
  while((n&1) == 0)
  {
    n >>= 1;
    position += 1;
  }
  return position;
}
int main()
{
  int n;
  cin>>n;
  cout<<rightMostOne(n);
}
