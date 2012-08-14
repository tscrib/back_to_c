//***********************************************************************************
//
// @Title wikibooks.h
// @Author Tim Scribner
// Description: 
// Contains functions to solve the problems found here:
// http://en.wikibooks.org/wiki/C++_Programming/Exercises/Iterations
//***********************************************************************************

#import <stdlib.h>

//
// Function definitions
//
void wikibooks14( void)
{
	char input[1000];
	int result=1, N=0, i=0;

	printf("Enter a number N, and N! will be computed.\n");
	scanf("%s", input);
	N=atoi(input);

	for( i=1; i<=N; i++)
		result = result * i;

	printf("N! is: %i\n", result);
}