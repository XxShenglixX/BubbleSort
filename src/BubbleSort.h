#ifndef BubbleSort_H
#define BubbleSort_H

void bubbleSort(int array[],int length);
void singleBubbleSort(int array[],int size, int length);
void swap(int array[],int index1, int index2);

void _bubbleSort(void *array,int length);
void _singleBubbleSort(void *array,int size, int length);
void _swap(void *array,int index1, int index2);

#endif // BubbleSort_H
