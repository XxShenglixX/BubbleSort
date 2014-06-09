#include "GenericBubblesort.h"
#include "CharacterBubbleSort.h"
#include "DoubleBubbleSort.h"
#include "IntegerBubbleSort.h"
#include <stdio.h>

void genericSingleBubbleSort(void *array,int size, int length, 
							 int (*compare)(void *v1, void *v2),
							 void (*swap)(void *array, int index1,int index2))
{		
	int length_1,length_2,indicator;
	void *ori_array = array; // to store the original pointer of the array
	int temp = length - 1 ; // temp to store number of elements of array;
	int x ;	
	if (compare == (&integerCompare) )
		x = 4; // int 4byte

	else if (compare == (&doubleCompare) )
		x = 8;// double 8byte
	
	else 
		x = 1;// char 1byte
	
	
	while ( temp != 0 ) // to change to pointer to point to the last element of array;
			{
				array +=x ; 
				temp -- ;
			}
	

	while (size !=1)
	{

		void *xarray = array; 
			xarray -=x;				// point to the previous element of an array..eg current: array[1] xarray: array[0]

			
		length_1 = length -1 ;
		length_2 = length - 2 ;
		indicator = 0;
		indicator = compare(array,xarray);
		
		if (indicator == -1)
			swap(ori_array,length_1,length_2);
		
		
		size -- ;
		length -- ;

		array -=x;				

	}
}	

void genericBubbleSort(void *array, int length, 
					   int (*compare)(void *v1, void *v2),
					   void (*swap)(void *array, int index1,int index2))
{
	int i ;
	int size =length;
	
	for (i =0 ; i < length - 1 ; i ++ )
	{
		genericSingleBubbleSort(array,size,length,compare,swap);
		size -- ;
	}
	
}