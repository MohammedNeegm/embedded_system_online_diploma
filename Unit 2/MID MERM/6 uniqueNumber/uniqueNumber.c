/*
 * uniqueNumber.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: HP
 */
#include<stdio.h>
int uniqueNumber(int a[], int size)
{
    int unique=0;
    for ( int i=0;i<size;i++)
    {
        unique^=a[i];
    }
    return unique;
}
int main()
{
    int a[100],size,unique;
    printf("enter size of array ");
    fflush(stdout);
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    unique=uniqueNumber(a,size);
    printf("unique Number = %d",unique);
}

