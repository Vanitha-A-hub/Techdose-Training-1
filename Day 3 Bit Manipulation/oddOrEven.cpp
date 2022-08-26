#include <bits/stdc++.h>
using namespace std;
int oddOrEven(int n)
{
  return (n&1) == 1;
}
int main()
{
  int n;
  cin>>n;
  oddOrEven(n) == 0 ? cout<<"Even" : cout<<"Odd";
}
