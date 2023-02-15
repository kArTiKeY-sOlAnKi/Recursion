#include <iostream>
using namespace std ;

int partition(int *arr, int start, int end)
{
	// Creating pointer variables
	int i = start - 1 ;
	int j = start ;
	int pivot = arr[end] ;

	for( ; j <= end - 1; )
	{
		if (arr[j] <= pivot)
		{
			i = i + 1 ;
			swap(arr[i],arr[j]) ;
		}
		j = j + 1 ;
	}
	swap(arr[i+1],arr[end]) ;
	return i + 1 ;
}

int quick_sort(int *arr, int start, int end)
{
	// Base Case
	if (start >= end)
	{
		return 0 ;
	}

	int p = partition(arr,start,end) ;
	// Left Part
	quick_sort(arr,start,p-1) ;
	// Right Part
	quick_sort(arr,p+1,end) ;
}

int main ()
{
	int arr[] = {5,6,1,2,4,0} ;
	int n = sizeof(arr)/sizeof(int) ;

	int start = 0 ;
	int end = n - 1 ;

	quick_sort(arr,start,end) ;

	// Sorted Array
	for(int i = start; i <= end; i++)
	{
		cout<<arr[i]<<"  " ;
	}

	return 0 ;
}