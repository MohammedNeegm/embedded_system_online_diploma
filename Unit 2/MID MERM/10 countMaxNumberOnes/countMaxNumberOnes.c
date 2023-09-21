#include <stdio.h>
int countMaxNumberOnes(int num)
{
    int count=0;
    while(num)
    {
        num = (num&((unsigned)num>>1));
        count++;
    }
    return count;
}
int main()
{
    int num;
    printf("enter a number :");
    fflush(stdout);
    scanf("%d" , &num);
    printf("max number of ones = %d" , countMaxNumberOnes(num));
    return 0;
}
