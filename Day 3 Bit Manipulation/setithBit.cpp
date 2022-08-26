#include <bits/stdc++.h>
using namespace std;
int setithBit(int n)
{
  return n | (1<<n);
}
int main()
{
  int n;
  cin>>n;
  cout<<setithBit(n);
}
