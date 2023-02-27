#include <iostream>
using namespace std ;

int profit(int n, int c, int *weights, int *prices)
{
	if (n == 0 or c == 0)
	{
		return 0 ;
	}

	int ans = 0 ;
	int inc = 0 ;
	int exc = 0 ;

	if (weights[n - 1] <= c)
	{
		inc = prices[n - 1] + profit(n-1,c-weights[n-1],weights,prices) ;
	}
	// exclude 
	exc = profit(n-1,c,weights,prices) ;

	ans = max(inc,exc) ;

	return ans ;
}

int main ()
{
	int weights[] = {1,2,3,4,5} ;
	int prices[] = {40,20,30,100} ;

	int n = 4 ;
	int c = 7 ;
	cout<<profit(n,c,weights,prices) ;

	return 0 ;
}