//***********************************************************************************
//
// @Title discIntersections.h
// @Author Tim Scribner
// Description: 
// Contains a function created for the codility 'discIntersections' test. 
// Scored 13 on the codility test; used 30 minutes; 3 stars.
//
//***********************************************************************************

//#include "cust_util.h"

//
// discIntersections Function Definition - 13
//
int di( int A[], int N )
{
	int count=0, i=0, j=0, r_min_j=0, r_max_i=0, r_max_j=0, r_min_i=0;

	if(N==0)
		return 0;

	for( i=0; i<N; i++)
	{
		r_max_i = i+A[i];
		r_min_j = i-A[i];

		for( j=i+1; j<N; j++)
		{
			r_min_j = j-A[j];
			r_max_j = j+A[j];

			if( r_min_i >= r_min_j || r_max_i <= r_max_j)
				count++;
		}

		if(count>10000000)
			return -1;
	}

	return count;
}

//
// discIntersections Function Definition - fail - seg fault
//
int di2( int A[], int N )
{
	int count=0, i=0, j=0;
//	int index[] = new array(N);

	if(N==0)
		return 0;

	for(i=0; i<N; i++)
	{
	//	for(j=i; j>-abs(A[i]); j--)
	//	{
	//		index[j+10000000]++;
	//		if( index[j+10000000] < 1 )
	//		{
	//			count++;
	//			if( count > 10000)
	//				return -1;
	//		}
				
	//	}
			
	}

	return count;
}


//
// had to be copied into the Codility window
//
int int_cmp(const void *a, const void *b) 
{ 
    const int *ia = (const int *)a; // casting pointer types 
    const int *ib = (const int *)b;
    return *ia  - *ib; 
	/* integer comparison: returns negative if b > a,
	zero if equal, 
	and positive if a > b */ 
} 


//
// discIntersections Function Definiion - after reading online - 27... weird
// Updated not to use the last space in the array - 100%
// Must use sort and define own int sort algorithm
//
int di3( int A[], int N)
{
	int span[N];
	int i=0, j=0, count=0, curr_span=0;
	size_t len = 0;
	
	// calc the span
	for( i-0; i<N; i++ )
	{
		span[i] = i-A[i];
	}

	//sort the span array
	len = sizeof(span)/sizeof(int);
	qsort(span, len, sizeof(int), int_cmp);


	for( i=0; i<N; i++ )
	{
		// Set the width of the current item
		curr_span = i + A[i];

		// determine index which no longer spans
		for( j=i; ( span[j] <= curr_span && j<N ); j++){}

		// Update count
		count += ( j - i - 1 );

		// Check size of count
		if( count > 10000000)
			return -1;
		
	}

	return count;

}






