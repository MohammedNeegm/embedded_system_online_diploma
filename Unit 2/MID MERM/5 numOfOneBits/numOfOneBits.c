/*
 * numOfOneBits.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: HP
 */
#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
    int num, zeros, ones;


    printf("Enter any number: ");
    fflush(stdout);
    scanf("%d", &num);

    zeros = 0;
    ones = 0;

    for(int i=0; i<INT_SIZE; i++)
    {

        if(num & 1)
            ones++;
        else
            zeros++;

        num >>= 1;
    }


    printf("Total one bit is %d", ones);

    return 0;
}

