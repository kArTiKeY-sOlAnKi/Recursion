#include <iostream>
using namespace std ;

bool rat_maze(char maze[][10], int soln[][10], int i, int j, int m, int n)
{
	// base case
	if (i == m and j == n)
	{
		soln[m][n] = 1 ;
		// Print the maze
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cout<<soln[i][j]<<"  " ;
			}
			cout<<endl ;
		}
		return true ;
	}
	// cout<<endl 

	// Corner Cases
	// Rat shd always be in the maze
	if (i > m or j > n)
	{
		return false ;
	}

	// If obstacle encountered then return
	if (maze[i][j] == 'X')
	{
		return false ;
	}

	// assuming that soln exists through current cell
	soln[i][j] = 1 ;

	// recursion
	bool rightSuccess = rat_maze(maze,soln,i,j+1,m,n) ;
	bool downSuccess = rat_maze(maze,soln,i+1,j,m,n) ;

	// Backtracking
	soln[i][j] = 0 ;

	if (rightSuccess or downSuccess)
	{
		return true ;
	}

	return false ;
}

int main ()
{
	char maze[10][10] = {"0000","00X0","000X","0X00"} ;
	int soln[10][10] = {0} ;
	int m = 4, n = 4 ;

	bool ans = rat_maze(maze,soln,0,0,m - 1,n - 1) ;

	if (ans == false)
	{
		cout<<"No path exists " ;
	}

	return 0 ;
}