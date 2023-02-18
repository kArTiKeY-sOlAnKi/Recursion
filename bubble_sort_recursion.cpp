#include <iostream>
using namespace std ;

void bubbleSort_recursion(int *arr, int j, int n)
{
	// Base Case
	if (n == 1)
	{
		return ;
	}

	if (j == n - 1)
	{
		return bubbleSort_recursion(arr,0,n-1) ;
	}

	if (arr[j] > arr[j+1])
	{
		swap(arr[j],arr[j+1]) ;
	}

	return bubbleSort_recursion(arr,j+1,n) ;
}

int main ()
{
	int arr[] = {5,6,1,2,4,0} ;
	int n = sizeof(arr)/sizeof(int) ;
	// int j = 0 ;

	bubbleSort_recursion(arr,0,n) ;

	// Sorted Array 
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<"  " ;
	}

	return 0 ;
}