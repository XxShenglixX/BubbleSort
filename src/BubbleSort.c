#include "BubbleSort.h"
#include <stdio.h>


void bubbleSort(int array[],int length)
{
	int i ,size;
	size = length;

	for (i = 0 ; i <length-1; i++)
	{
		singleBubbleSort(array,size,length);
		size--;	
	}

	
}

void singleBubbleSort(int array[],int size, int length)
{
	
	
	while (size!=1)
	{
		if (array[length-1] < array[length-2] )
			swap(array,length-1,length-2);
		
		length--;
		size--;
	}	
		
}
	
void swap(int array[],int index1, int index2)
{
	int temp; //Create temporary path to story array[index1]
	
	temp = array[index1] ;
	array[index1] = array[index2];
	array[index2] = temp ;
	
}