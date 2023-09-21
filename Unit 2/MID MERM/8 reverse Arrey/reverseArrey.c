/*
 * reverseArrey.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: HP
 */
#include <stdio.h>
void reverseArray(int x[],int size)
{
    int start=0;
    int temp;
    int end=size-1;
    while (start<end)
    {
        temp=x[start];
        x[start]=x[end];
        x[end]=temp;
        start++;
        end--;

    }
}




int main()
{
    int x[100];
    int size ;
    printf ("enter size of array :");
    fflush (stdout);
    scanf("%d",&size);
    for(int i=0; i<size ;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("original array :\n");
    for(int i=0; i<size ;i++)
    {
        printf("%d\t",x[i]);
    }
    reverseArray(x,size);
    printf("\nreverse array :\n");
    for(int i=0 ;i<size ;i++)
    {
        printf("%d\t",x[i]);
    }





    return 0;
}

