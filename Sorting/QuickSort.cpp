#include<iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
int partition(int arr[], int low, int high)
{
	int i = low-1, j = low;
	for(; j<high; j++)
	{
		if(arr[j] <= arr[high])
		{
			i++;
			swap(arr, i, j);
		}
	}
	swap(arr, i+1, high);
	return high;
}
void quickSort(int arr[], int low, int high)
{
	if(low < high)
	{
		int part = partition(arr, low, high);
		quickSort(arr, low, part-1);
		quickSort(arr, part+1, high);
	}
	return;
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
	quickSort(arr, 0, n-1);
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
