#include <iostream>
using namespace std ;

char words[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"} ;

void printSpelling(int n)
{
	if (n == 0)
	{
		return ;
	}

	printSpelling(n/10) ;
	int digit = n % 10 ;
	cout<<words[digit]<<" " ;
}

int main ()
{
	int n ;
	cin>>n ;
	printSpelling(n) ;

	return 0 ;
}