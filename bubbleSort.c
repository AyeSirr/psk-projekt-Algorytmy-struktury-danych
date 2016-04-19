#include "bubbleSort.h"


void bubbleSort(int table[], int size)
{
	int i, j, temp;
	for (i = 0; i<size-1; i++)
    {
		for (j=0; j<size-1-i; j++)
		{
			if (table[j] > table[j+1])
			{
				temp = table[j+1];
				table[j+1] = table[j];
				table[j] = temp;
			}
		}
    }
}
