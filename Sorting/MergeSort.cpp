#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int mid, int low, int high)
{
  int i = low, j = mid+1, k = low, sortArr[high+1];
  while(i<=mid && j<=high)
  {
    if(arr[i] < arr[j])
    {
      sortArr[k] = arr[i];
      i += 1;
    }
    else
    {
      sortArr[k] = arr[j]; 
      j += 1;
    }
    k += 1;
  }
  while(i<=mid)
  {
    sortArr[k++] = arr[i];
    i += 1;
  }
  while(j<=high)
  {
    sortArr[k++] = arr[j];
    j += 1;
  }
  for(int i=low; i<=high; i++)
  {
    arr[i] = sortArr[i];
  }
}
void mergeSort(int arr[], int low, int high)
{
  if(low == high)
    return;
  int mid = low + ((high-low)/2);
  mergeSort(arr, low, mid);
  mergeSort(arr, mid+1, high);
  merge(arr, mid, low, high);
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  mergeSort(arr, 0, n-1);
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
}
/*
Time Complexity:
----------------
	
BC : O(NlogN)
WC : O(NlogN)
AC : O(NlogN)	
*/
