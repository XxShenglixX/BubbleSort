#include "DoubleBubbleSort.h"
#include <stdio.h>
/** 
 * Compare 2 integers and return if greater,same,or
 * smaller.
 * 
 * Input : 
 *	v1 	is the pointer to the first value
 *	v2	is the pointer to the second value
 * Return :
 * 1 if *v1 >  *v2
 * 0 if *v1 == *v2
 *-1 if *v1 <  *v2
 */
int doubleCompare(void *v1, void*v2)
{
	double *value1 =(double *)v1;
	double *value2 =(double *)v2;
	
	if (*value1 > *value2)
		return 1;
	else if (*value1 == *value2)
		return 0;
	else
		return -1;
}


/** 
 * Swap 2 integers in the array given
 * 
 * Input : 
 *	array	is an array of integers
 *	index1	is the index of the first integer in the array
 *	index2	is the index of the second integer in the array
 *
 * Precondition:
 *	indices given must be within bounds of the array
 */
void doubleSwap(void *array, int index1, int index2)
{	
	double *DOB_array = (double *)array ;
	int temp ;
	
	temp = DOB_array[index1] ;
	DOB_array[index1] = DOB_array[index2] ;
	DOB_array[index2] = temp ;
}

/** 
 * Perform single bubble sort for an integer array
 * 
 * Input : 
 *	array	is an array of integers
 *	size	is the size of elements left needed to be swap
 *	length	is the total number of elements in the array
 *
 * Precondition:
 *	indices given must be within bounds of the array
 */
void singleDoubleBubbleSort(void *array,int size,int length)
{
	double *DOB_array = (double *)array ;
	int indicator,length_1,length_2;
	
	while ( size != 1)
	{
		length_1 = length - 1;
		length_2 = length - 2;
		indicator = 0;
		indicator = doubleCompare(&DOB_array[length_1], &DOB_array[length_2]); 
		if (indicator == -1)
			doubleSwap(DOB_array,length_1,length_2);
	
		size --;
		length --;
	}	
		
}

/** 
 * Perform full bubble sort for an integer array
 * 
 * Input : 
 *	array	is an array of integers
 *	length	is the total number of elements in the array
 *
 * Precondition:
 *	indices given must be within bounds of the array
 */
void DoubleBubbleSort(void *array,int length)
{
	int i ;
	int size = length;
	double *DOB_array = (double *) array;
	
	
	for ( i = 0 ; i < (length - 1) ; i ++ )
	{
		singleDoubleBubbleSort(DOB_array,size,length);
		size -- ;
	}
}