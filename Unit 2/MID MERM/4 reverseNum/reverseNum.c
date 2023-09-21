/*
 * reverseNum.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: HP
 */
#include<stdio.h>
int main()
{
    int n, reverse=0,reminder;
    printf("enter the number =");
    fflush(stdout);
    scanf("%d",&n);
    while(n!=0)
    {
        reminder=n%10;
        reverse=reverse*10+reminder;
        n/=10;
    }
    printf("reverse = %d ",reverse);

}

