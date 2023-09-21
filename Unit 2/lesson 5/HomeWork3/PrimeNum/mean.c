#include <stdio.h>
int checkPrimeNum(int x)
{
	int i,flag =1;
	for (i=2;i<=x/2;++i)
	{
		if(x %i == 0)
		{
			flag =0;
			break;
		}
	}
	return flag ;
}
int main()
{
	int num1, num2, i , flag;
	printf ("enter two numbers to check the prime numbers\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&num1 ,&num2);
	printf("the prime numbers between %d & %d \n",num1 ,num2 );
	for (i=num1 ;i<=num2;i++)
	{
		flag= checkPrimeNum(i);
		if (flag==1 )
			printf("%d\n",i);

	}
	return 0;
}
