//***********************************************************************************
//
// @Title cust_util.h
// @Author Tim Scribner
// Description: 
// Contains functions which are generally useful while C programming.
//
//***********************************************************************************

//
// qsort int comparison function 
// taken from http://www.anyexample.com/programming/c/qsort__sorting_array_of_strings__integers_and_structs.xml
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
// integer array printing function 
// taken from http://www.anyexample.com/programming/c/qsort__sorting_array_of_strings__integers_and_structs.xml
// 
void print_int_array(const int *array, size_t len) 
{ 
    size_t i;
 
    for(i=0; i<len; i++) 
        printf("%d | ", array[i]);
 
    putchar('\n');
} 