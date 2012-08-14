//***********************************************************************************
//
// @Title prefixSet.h
// @Author Tim Scribner
// Description: 
// Contains a function created for the codility 'prefixSet' test. 
// Scored 100 on the codility test; used 24 minutes; two stars.
//
//***********************************************************************************

//
// prefixSet Function Definition
//
int ps( int A[], int N )
{
	int i =0, max =0;
	int index[1000000] = {};
	
	for( i=0; i<N; i++)
	{
		if( index[ A[i] ] == 0)
		{
			index[ A[i] ] ++;
			max = i;
		}
	}

	return max;
}