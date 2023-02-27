#include <iostream>
using namespace std ;

void generate_string(char *input, char *output, int i, int j)
{
	// base case
	if (input[i] == '\0')
	{
		output[j] = '\0' ;
		cout<<output<<endl ;
		return ;
	}

	// rec case
	// one digit
	int digit = input[i] - '0' ; // char to int
	char ch = digit + 'A' - 1 ; // mapping that digit to alphabetic letters
	output[j] = ch ;
	generate_string(input,output,i+1,j+1) ;

	// two digits at a time
	if (input[i+1] != '\0')
	{
		int second_digit = input[i+1] - '0' ;
		int num = digit*10 + second_digit ;
		if (num <= 26)
		{
			ch = num + 'A' - 1 ;
			output[j] = ch ;
			generate_string(input,output,i+2,j+1) ;
		}
	}
	return ;
}

int main ()
{
	char input[100] ;
	cin>>input ;
	char output[100] ;

	generate_string(input,output,0,0) ;

	return 0 ;
}