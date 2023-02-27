#include <iostream>
using namespace std ;

void balance_bracket(char *out, int n, int idx, int open, int close)
{
	if (idx == 2*n)
	{
		out[idx] = '\0' ;
		cout<<out<<endl ;
		return ;
	}

	// rec case
	if (open < n)
	{
		out[idx] = '(' ;
		balance_bracket(out,n,idx+1,open+1,close) ;
	}

	if (close < open)
	{
		out[idx] = ')' ;
		balance_bracket(out,n,idx+1,open,close+1) ;
	}

	return ;
}

int main ()
{
	int n ;
	cin>>n ;
	char out[100] ;
	balance_bracket(out,n,0,0,0) ;

	return 0 ;
}