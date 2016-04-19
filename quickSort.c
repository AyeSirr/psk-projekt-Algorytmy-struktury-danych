#include "quickSort.h"

void quickSort(int table[], int size)
{
    _quickSort(table, 0, size-1);
}

void _quickSort(int x[],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         _quickSort(x,first,j-1);
         _quickSort(x,j+1,last);

    }
}
