#include <iostream>
using namespace std ;

void replacePi(char *a, int i)
{
	if (a[i] == '\0' or a[i + 1] == '\0')
	{
		return ;
	}

	if (a[i] == 'p' and a[i+1] == 'i')
	{
		int j = i + 2 ;
		// creating space
		while (a[j] != '\0')
		{
			j++ ;
		}

		// shifting values
		while(j >= i + 2)
		{
			a[j + 2] = a[j] ;
			j-- ;
		}

		// replacement
		a[i] = '3' ;
		a[i + 1] = '.' ;
		a[i + 2] = '1' ;
		a[i + 3] = '4' ;

		return replacePi(a,i + 4) ;
	}
	else
	{
		return replacePi(a, i + 1) ;
	}
}

int main ()
{
	char str[1000] ;
	cin>>str ;
	replacePi(str,0) ;
	cout<<str ;

	return 0 ;
}