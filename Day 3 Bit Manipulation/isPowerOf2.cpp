#include <bits/stdc++.h>
using namespace std;
int isPowOf2(int n)
{
	return (n&(n-1)) == 0;
}
int main() {
	int n;
	cin>>n;
	isPowOf2(n) == 1 ? cout<<"Yes" : cout<<"No";
}
