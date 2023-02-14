#include <iostream>
using namespace std ;

void merge(int *arr, int start, int end)
{
	// Creating pointer variables
	int mid = (start + end) / 2 ;
	int i = start ;
	int j = mid + 1 ;
	int k = start ;
	int temp[1000] = {0} ;

	while (i <= mid and j <= end)
	{
		if (arr[i] < arr[j])
		{
			temp[k++] = arr[i++] ;
		}
		else
		{
			temp[k++] = arr[j++] ;
		}
	}

	// filling remaining part
	while (i <= mid)
	{
		temp[k++] = arr[i++] ;
	}

	while (j <= end)
	{
		temp[k++] = arr[j++] ;
	}

	// Copying into original
	for (int i = start; i <= end; i++)
	{
		arr[i] = temp[i] ;
	}
}

int merge_sort(int *arr, int start, int end)
{
	// Base Case
	if (start >= end)
	{
		return 0 ;
	}

	int mid = (start + end) / 2 ;
	merge_sort(arr,start,mid) ;
	merge_sort(arr,mid+1,end) ;

	// Merge final array
	merge(arr,start,end) ;
}

int main ()
{
	int arr[] = {5,6,1,2,4,0} ;
	int n = sizeof(arr)/sizeof(int) ;

	int start = 0 ;
	int end = n - 1 ;

	merge_sort(arr,start,end) ;

	// Sorted Array
	for(int i = start; i <= end; i++)
	{
		cout<<arr[i]<<"  " ;
	}

	return 0 ;
}