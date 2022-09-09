#include <bits/stdc++.h>
using namespace std;
vector <int> arr;
int size = 0;
void insertionSort(int val)
{
  arr.push_back(val);
  size += 1;
  for(int i=size-1; i>0; i--)
  {
    if(arr[i] >= arr[i-1])
      break;
    int temp = arr[i];
    arr[i] = arr[i-1];
    arr[i-1] = temp;
  }
}
int main()
{
  int n;
  cin>>n;
  int val;
  for(int i=0; i<n; i++)
  {
    cin>>val;
    insertionSort(val);
  }
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
}

/*Time Comlexity:
---------------
BC : O(N)  ==>Already in sorted order
WC : O(N^2) ==> Descending order
Ac : O(N^2)  ==> randomly arranged*/
