#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "sort.h"

void printArr(int *arr,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void main()
{
	int arr[10] = {6,7,8,9,4,5,2,3,1,0};
	printf("\nbefore: ");
	printArr(arr,10);

	//quickSort(arr,10);
	//bubbleSort(arr,10);
	//selectSort(arr,10);
	directInsertSort(arr,10);
	printf("\n after: ");
	printArr(arr,10);
}





