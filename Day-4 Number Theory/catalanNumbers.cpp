#include<bits/stdc++.h>
using namespace std;
vector <int> catalan;
int catalanNumber(int n)
{
  for(int i=2; i<=n; i++)
  {
    catalan[i] = 0;
    for(int j=0; j<i; j++)
    {
      catalan[i] += (catalan[j]*catalan[i-j-1]);
    }
  }
  return catalan[n];
}
int main()
{
  int n;
  cin>>n;
  catalan.resize(n+1,1);
  cout<<catalanNumber(n);
}
