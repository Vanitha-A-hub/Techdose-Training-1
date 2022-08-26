#include <bits/stdc++.h>
using namespace std;
int twosCompliment(int n)
{
  int flag = 0, mask = 1;
  for(int i=0; n>>i != 0; i++)
  {
    if(flag == 0 && ((n&mask) != 0))
    {
      flag = 1;
    }
    else if(flag == 1)
    {
      n ^= mask;
    }
    mask <<= 1;
  }
  return n;
}
int main()
{
  int n;
  cin>>n;
  cout<<twosCompliment(n);
}
