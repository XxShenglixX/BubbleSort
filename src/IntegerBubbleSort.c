#include "IntegerBubbleSort.h"
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
int integerCompare(void *v1, void*v2)
{
	int *value1 =(int *)v1;
	int *value2 =(int *)v2;
	
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
void integerSwap(void *array, void *index1, void *index2)
{
	int *value1 =(int *)index1;
	int *value2 =(int *)index2;
	int *INT_array = (int *)array ;
	int temp ;
	
	temp = INT_array[*value1] ;
	INT_array[*value1] = INT_array[*value2] ;
	INT_array[*value2] = temp ;
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
void singleIntegerBubbleSort(void *array,void *size,void *length)
{
	int *INT_array = (int *)array ;
	int *array_size = (int *)size;
	int *array_length = (int *)length ;
	
	while ( *array_size != 1)
	{
		int array_length_1 = *array_length - 1;
		int array_length_2 = *array_length - 2 ;
		int indicator = 0;
		indicator = integerCompare(&INT_array[array_length_1], &INT_array[array_length_2]); 
		if (indicator == -1)
			integerSwap(INT_array,&array_length_1,&array_length_2);
	
		*array_length = *array_length - 1;
		*array_size = *array_size - 1;	
	}	
		
}