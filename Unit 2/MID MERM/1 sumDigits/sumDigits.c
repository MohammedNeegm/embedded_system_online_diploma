/*
 * sumDigits.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: HP
 */
#include<stdio.h>
int sumDigits(int num)
{
    int sum=0;
    if (num<0)
    {
        num=-num;
    }
    while (num!=0)
    {
        int digit=num%10;
        sum+=digit;
        num/=10;
    }
    return sum;
}
int main()
{
    int num;
    printf("enter a digit number = ");
    fflush(stdout);
    scanf("%d",&num);
    printf("sum 0f digit = %d ",sumDigits(num));
    return 0;
}

