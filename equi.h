//***********************************************************************************
//
// @Title equi.h
// @Author Tim Scribner
// @Description Contains a function created for the codility 'equi' test
//
//***********************************************************************************

//
// equi Function Definition
//
int equi( int A[], int N )
{
	// Check array bounds
	if( N > 10000000 || N < 0)
		return -1;

	if( N == 0)
		return 0;

	// local variables
	long long sum = 0, left = 0;
	int i = 0;

	// The sum of all elements of the array
	for( i = 0; i < N; i++ )
		sum += A[ i ];

	// Check if sum is zero; if so, it is an equilibrium
	if( sum == 0)
		return ( N - 1 );

	// Iterate over the input array
	for( i = 0; i < N; i++ )
	{
		sum -= A[ i ];

		if( left == sum )
			return i;

		left += A[ i ];
	}

	// No equilibrium index was found
	return -1;
}