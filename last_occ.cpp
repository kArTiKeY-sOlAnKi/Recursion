#include <iostream>
using namespace std ;

int last_occ(int arr[], int n, int key)
{
	// array is 1,2,3,7,4,5,7,7,9 
	// base case
	if (n == 0)
	{
		return -1 ;
	}

	int i = last_occ(arr+1,n-1,key) ;
	if (i == -1)
	{
		if (arr[0] == key)
		{
			return 0 ;
		}
		else
		{
			return -1 ;
		}
	}
	return i + 1 ;
}

int main ()
{
	int arr[] = {1,2,3,7,4,5,7,7,9} ;
	int n = sizeof(arr)/sizeof(int) ;

	int key ;
	cin>>key ;

	int ans = last_occ(arr,n,key) ;
	cout<<ans ;

	return 0 ;
}