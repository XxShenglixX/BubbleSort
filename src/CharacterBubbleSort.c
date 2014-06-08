#include "CharacterBubbleSort.h"
#include <stdio.h>

/** 
 * Compare 2 characters and return if greater,same,or
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
int characterCompare(void *v1, void*v2)
{
	char *alpha1 =(char *)v1;
	char *alpha2 =(char *)v2;
	
	if (*alpha1 > *alpha2)
		return 1;
	else if (*alpha1 == *alpha2)
		return 0;
	else
		return -1;
}


/** 
 * Swap 2 characters in the array given
 * 
 * Input : 
 *	array	is an array of characters
 *	index1	is the index of the first integer in the array
 *	index2	is the index of the second integer in the array
 *
 * Precondition:
 *	indices given must be within bounds of the array
 */
void characterSwap(void *array, int index1, int index2)
{	
	char *chara_array = (char *)array ;
	int temp ;
	
	temp = chara_array[index1] ;
	chara_array[index1] = chara_array[index2] ;
	chara_array[index2] = temp ;
}

/** 
 * Perform single bubble sort for a character array
 * 
 * Input : 
 *	array	is an array of characters
 *	size	is the size of elements left needed to be swap
 *	length	is the total number of elements in the array
 *
 * Precondition:
 *	indices given must be within bounds of the array
 */
void singleCharacterBubbleSort(void *array,int size,int length)
{
	char *chara_array = (char *)array ;
	int indicator,length_1,length_2;
	
	while ( size != 1)
	{
		length_1 = length - 1;
		length_2 = length - 2;
		indicator = 0;
		indicator = characterCompare(&chara_array[length_1], &chara_array[length_2]); 
		if (indicator == -1)
			characterSwap(chara_array,length_1,length_2);
	
		size --;
		length --;
	}	
		
}

/** 
 * Perform full bubble sort for a character array
 * 
 * Input : 
 *	array	is an array of characters
 *	length	is the total number of elements in the array
 *
 * Precondition:
 *	indices given must be within bounds of the array
 */
void CharacterBubbleSort(void *array,int length)
{
	int i ;
	int size = length;
	char *chara_array = (char *) array;
	
	
	for ( i = 0 ; i < (length - 1) ; i ++ )
	{
		singleCharacterBubbleSort(chara_array,size,length);
		size -- ;
	}
}