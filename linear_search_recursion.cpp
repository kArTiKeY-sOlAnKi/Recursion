#include <iostream>
using namespace std ;

int search(int arr[], int n, int key)
{
	// base case
	if (n == 0)
	{
		return  -1 ;
	}

	if (arr[0] == key)
	{
		return 0 ;
	}

	int i = search(arr+1,n-1,key) ;
	if (i == -1)
	{
		return -1 ;
	}

	return i + 1 ;
}

int main ()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10} ;
	int n = sizeof(arr)/sizeof(int) ;

	int key ;
	cin>>key ;

	int ans = search(arr,n,key) ;
	cout<<"Found at position : "<<ans+1 ;

	return 0 ;
}