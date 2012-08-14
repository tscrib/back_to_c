//***********************************************************************************
//
// @Title wikibooks.h
// @Author Tim Scribner
// Description: 
// Contains functions to solve the problems found here:
// http://en.wikibooks.org/wiki/C++_Programming/Exercises/Iterations
//***********************************************************************************

#import <stdlib.h>
#import <math.h>

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

void wikibooks21( void )
{
	char input[1000];
	int result=0, N=0;

	while( 1 )
	{
		switch( N )
		{
			case -999:
				printf("The program will exit\n");
				exit(0);
			default:
				printf("Enter a number N, and N^3 computed. Enter -999 to exit.\n");
				scanf("%s", input);
				N=atoi(input);

				printf("The cube of %i is %.f\n", N, pow((double)N,3));	
		}
	}
	
}

void wikibooks25( void )
{
	double A = 50000000, B = 70000000;
	int years = 0;

	while( B > A )
	{
		A = A * 1.03;
		B = B * 1.02;
		years++;
	}

	printf("It will take %i years for country A to surpass country B.\n", years);
}