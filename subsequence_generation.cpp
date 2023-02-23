#include <iostream>
using namespace std ;

void generate_subsequence(char *input, char *output, char i, char j)
{
	// Base Case
	if (input[i] == '\0')
	{
		output[j] = '\0' ;
		cout<<output<<endl ;
		return ;
	}

	// include element
	output[j] = input[i] ;
	generate_subsequence(input,output,i+1,j+1) ;
	// exclude element
	generate_subsequence(input,output,i+1,j) ;
}

int main ()
{
	char input[] = "abcd" ;
	char output[10] ;

	generate_subsequence(input,output,0,0) ;

	return 0 ;
}