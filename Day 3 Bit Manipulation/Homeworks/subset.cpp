#include <bits/stdc++.h>
using namespace std;
vector <vector<char>> generate(vector <char> s, int n)
{
  vector <vector<char>> subsets;
  for(int i=0; i<(1<<n); i++)
  {
    vector<char> partial;
    for(int j=0; j<n; j++)
    {
      if((i & (1<<j)) != 0)
      {
        partial.push_back(s[j]);
      }
    }
    subsets.push_back(partial);
  }
  return subsets;
}
int main()
{
  int n;
  cin>>n;
  vector <char> s;
  for(int i=0; i<n; i++)
  {
    char ch;
    cin>>ch;
    s.push_back(ch);
  }
  vector <vector<char>> subsets = generate(s, n);
  for(vector <char> ch: subsets)
  {
      for(char i: ch)
      {
          cout<<i;
      }
      cout<<"\n";
  }
}
