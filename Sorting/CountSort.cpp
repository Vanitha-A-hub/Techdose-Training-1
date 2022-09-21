/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
void countSort(vector <int> &arr, int n)
{
    int mx = *max_element(arr.begin(), arr.end());
    vector <int> freq(mx+1, 0);
    vector <int> ans(n);
    for(int i=0; i<n; i++)
    {
        freq[arr[i]] += 1;
    }
    for(int i=1; i<=mx; i++)
    {
        freq[i] = freq[i] + freq[i-1];
    }
    for(int i = n-1; i >= 0; i--)
    {
        ans[--freq[arr[i]]] = arr[i];
    }
    arr = ans;
    return;
}
int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    countSort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
