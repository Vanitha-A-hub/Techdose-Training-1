#include<bits/stdc++.h>
using namespace std;
vector <int> primefact;
void pfactors(int n)
{
  for(int i=2; i*i<=n; i++)
  {
    while(n%i == 0)
    {
      n = (n/i);
      primefact.push_back(i);
    }
  }
  if(n>1)
    primefact.push_back(n);
}
int main()
{
  int n;
  cin>>n;
  pfactors(n);
  for(int i : primefact)
  {
    cout<<i<<" ";
  }
}
  
