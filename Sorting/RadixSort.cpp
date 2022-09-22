#include <bits/stdc++.h>
using namespace std;
void countSort(vector<int> &arr, int n, int tenp)
{
    vector<int> freq(10, 0);
    vector<int> ans(n+1);
    for(int i : arr)
    {
        freq[(i/tenp)%10] += 1;
    }
    for(int i=1; i<10; i++)
    {
        freq[i] += freq[i-1];
    }
    for(int i=n-1; i>=0; i--)
    {
        ans[--(freq[(arr[i]/tenp)%10])] = arr[i];
    }
    arr = ans;
    return;
}
void radixSort(vector<int> &arr, int n)
{
    int mx = *max_element(arr.begin(), arr.end());
    int times = floor(log10(mx) + 1), tenp = 1;
    for(int i=0; i<times; i++)
    {
        countSort(arr, n, tenp);
        tenp *= 10;
    }
    return;
}
void print(vector<int> arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n, val;
    std::vector<int> arr;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    radixSort(arr, n);
    print(arr, n);
    return 0;
}
