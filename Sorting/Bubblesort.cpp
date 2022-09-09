#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int n, int arr[])
{
  for(int i=n-1; i>0; i--)
  {
    int flag = 0;
    for(int j=0; j<=i; j++)
    {
      if(arr[j] > arr[j+1])
      {
        flag = 1;
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
    if(flag == 0)
      break;
  }
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
  bubbleSort(n, arr);
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
}

/* Time Complexity
 ---------------

BC : O(N) ==> Already sorted Array
WC : O(N^2) ==> reversely sorted Array
AC : O(N^2) ==> arranged randomly */
