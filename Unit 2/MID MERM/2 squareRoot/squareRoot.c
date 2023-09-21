/*
 * squareRoot.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: HP
 */
#include<stdio.h>
#include<math.h>

float squareRoot(int n)
{
    float result;
    result=sqrt(n);
    return result;
}
int main()
{
    int n ;
    printf("enter the number to take square root =");
    fflush(stdout);
    scanf("%d",&n);
    squareRoot(n);
    printf("square root for %d = %f",n,squareRoot(n));
}

