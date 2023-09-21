/*
 * checkPrimeNumber.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: HP
 */
#include <stdio.h>
int checkPrimeNum(int n );
int main ()
{
    int n1 , n2, flag;
    printf (" enter two number to check the prime numbers between them ");
    fflush (stdout);
    scanf("%d %d",&n1 ,&n2 );
    if (n1 >n2)
    {
        int temp =n1;
        n1=n2;
        n2=temp;
    }
    for (int i=n1;i<n2;i++){
       flag=checkPrimeNum(i);
        if (flag==1)
        {
            printf ("%d\t",i);
        }
    }
    return 0;
}
int checkPrimeNum(int n )
{
    int flag=1;
    for (int i=2;i<=n/2; i++)
    {
        if (n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

