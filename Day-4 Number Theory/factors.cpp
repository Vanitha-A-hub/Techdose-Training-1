#include<bits/stdc++.h>
using namespace std;
vector <int> fact;
void factor(int n)
{
  for(int i=1; i*i<=n; i++)
  {
    if(n%i == 0)
    {
      fact.push_back(i);
      if(n/i != i)
      {
        fact.push_back(n/i);
      }
    }
  }
}
int main()
{
  int n;
  cin>>n;
  factor(n);
  for(int i : fact)
  {
    cout<<i<<" ";
  }
}
