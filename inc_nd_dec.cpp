#include <iostream>
using namespace std ;

void func_inc(int n)
{
	// Increasing function, func shd print 1 2 3 4 5
	// Base Case 
	if (n == 0)
	{
		return ;
	}
	
	func_inc(n - 1) ;
	cout<<n<<"  " ;
}

void func_dec(int n)
{
	if (n == 0)
	{
		return ;
	}

	cout<<n<<"  " ;
	func_dec(n - 1) ;
}

int main ()
{
	int n ;
	cin>>n ;

	func_inc(n) ;
	cout<<endl ;
	func_dec(n) ;

	return 0 ; 
}