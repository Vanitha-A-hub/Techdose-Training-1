#include <bits/stdc++.h>
using namespace std;
char toLower(char ch)
{
  return ch|(1<<5);
}
char toUpper(char ch)
{
  return ch&(~(1<<5));
}
int main()
{
  char ch;
  cin>>ch;
  cout<<toUpper(ch)<<"\n";
  cout<<toLower(ch);
}
