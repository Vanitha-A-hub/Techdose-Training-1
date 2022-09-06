#include<bits/stdc++.h>
using namespace std;
vector <int> primes;
void allPrime(int n)
{
  vector <bool> isPrime(n+1, true);
  for(int i=2; i*i<=n; i++)
  {
    if(isPrime[i] == true)
    {
      for(int j=i*i; j<=n; j+=i)
      {
        isPrime[j] = false;
      }
    }
  }
  for(int i=2; i<=n; i++)
  {
    if(isPrime[i])
      primes.push_back(i);
  }
}
int main()
{
  int n;
  cin>>n;
  allPrime(n);
  for(int i : primes)
  {
    cout<<i<<" ";
  }
}
