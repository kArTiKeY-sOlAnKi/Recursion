#include <iostream>
using namespace std ;

int fast_power(int a, int n)
{
	// Base Case
	if (n == 0)
	{
		return 1 ;
	}

	int small_ans = fast_power(a,n/2) ;
	small_ans *= small_ans ;

	if (n & 1)
	{
		return small_ans * a ;
	}

	return small_ans ;
}

int main ()
{
	int a, n ;
	cin>>a>>n ;

	int ans = fast_power(a,n) ;
	cout<<ans ;

	return 0 ;
}