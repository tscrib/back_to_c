#include "equi.h"
#include "prefixSet.h"
#include "DiscIntersections.h"
#include "wikibooks.h"


//
// Function Declarations
//
void Prefix_Set_Test( void );
void Equi_Test( void );
void Disc_Intersections_Test( void );
void wikibooks_Test( void );

//
// Global Variables
//
int result = 0;

//
// Function Definitions
//
void Equi_Test( )
{
	//	int arr[] = {4, 6, -9, -2, 4, -5, 1, 7, 9, 2};
//	int arr[] = {1, -1, 1, -1, 1, -1, 1, -1, 1, -1};
//	int arr[] = {3, 9, -2, 10000010, 0, -10000000};
	int arr[] = { -7, 1, 5, 2, -4, 3, 0 };

	// equi Codility test
	result = equi( arr, 7 );
	printf("Codility test result = %i\n", result);
}

void Prefix_Set_Test( )
{
	int arr[] = {2, 2, 1, 0, 1};


	// PrefixSet codility test
	result = ps(arr,5);
	printf("Codility test result = %i\n", result);
}



void Disc_Intersections_Test( )
{
	int arr[] = {1, 5, 2, 1, 4, 0};

	// DiscIntersections codility test
	result = di3( arr, 6);
	printf("Codility test result = %i\n", result);
}

void wikibooks_Test()
{
//	wikibooks14();
//	wikibooks21();
	wikibooks25();
}
