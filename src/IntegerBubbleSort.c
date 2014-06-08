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
void integerSwap(void *array, int index1, int index2)
{	
	int *INT_array = (int *)array ;
	int temp ;
	
	temp = INT_array[index1] ;
	INT_array[index1] = INT_array[index2] ;
	INT_array[index2] = temp ;
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
void singleIntegerBubbleSort(void *array,int size,int length)
{
	int *INT_array = (int *)array ;
	int indicator,length_1,length_2;
	
	while ( size != 1)
	{
		length_1 = length - 1;
		length_2 = length - 2;
		indicator = 0;
		indicator = integerCompare(&INT_array[length_1], &INT_array[length_2]); 
		if (indicator == -1)
			integerSwap(INT_array,length_1,length_2);
	
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
void IntegerBubbleSort(void *array,int length)
{
	int i ;
	int size = length;
	int *INT_array = (int *) array;
	
	
	for ( i = 0 ; i < (length - 1) ; i ++ )
	{
		singleIntegerBubbleSort(INT_array,size,length);
		size -- ;
	}
}