#include <iostream>
using namespace std ;

bool checkSorted(int arr[], int n)
{
	// base case 
	if(n == 0 or n == 1)  // array is 1 2 3 4 5
	{
		return true ;
	}

	if (arr[0] < arr[1] and checkSorted(arr + 1, n - 1)) // here (n - 1) means the size of the array
	{
		return true ;
	}

	return false ;
}

int main ()
{
	int arr[] = {1,2,3,4,5} ;
	int n = sizeof(arr)/sizeof(int) ;

	bool ans = checkSorted(arr,n) ;

	if (ans)
	{
		cout<<"Sorted" ;
	}
	else
	{
		cout<<"Not Sorted" ;
	}

	return 0 ;
}