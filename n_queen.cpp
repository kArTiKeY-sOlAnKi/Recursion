#include <iostream>
using namespace std ;

bool isSafe(int board[][4],int n, int row, int col)
{
	int i = 0, j = 0 ;

	// checking rowwise
	for(i = 0; i < col; i++)
	{
		if (board[row][i])
		{
			return false ;
		}
	}

	// checking on upper diagonal on left side
	for (i = row, j = col; i >= 0 and j >= 0; i--,j--)
	{
		if(board[i][j])
		{
			return false ;
		}
	}

	// checking on lower diagonal on left side
	for (i = row, j = col; j >= 0 and i < n; i++, j--)
	{
		if(board[i][j])
		{
			return false ;
		}
	}

	return true ;
}

bool place_queen(int board[][4], int n, int row)
{
	// base case
	if (row == n - 1)
	{
		return true ;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cout<<board[i][j]<<"  " ;
			}
			cout<<endl ;
		}
	}

	for (int col = 0; col < n; col++)
	{
		if (isSafe(board,n,row,col))
		{
			board[row][col] = 1 ;
			if (place_queen(board,n,row))
			{
				return true ;
			}
			board[row][col] = 0 ;
		}
	}
	return false ;
}

int main ()
{
	int board[4][4] = {0} ;
	int n = 4 ;
	place_queen(board,n,0) ;

	return 0 ;
}