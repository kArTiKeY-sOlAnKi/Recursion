#include <iostream>
using namespace std ;

void tower_of_hanoi(int n, char source, char helper, char dest)
{
	if (n == 0)
	{
		return ;
	}

	// move n - 1 to helper from source
	tower_of_hanoi(n-1,source,dest,helper) ;
	cout<<"Shift Disk "<<n<<" from "<<source<<" to "<<dest<<endl ;
	tower_of_hanoi(n-1,helper,source,dest) ;
}

int main ()
{
	int n ;
	cin>>n ;

	tower_of_hanoi(n,'A','B','C') ;

	return 0 ;
}