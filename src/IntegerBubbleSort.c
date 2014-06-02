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

	int *temp = (int *)array;
	printf("temp %d",*temp);
}