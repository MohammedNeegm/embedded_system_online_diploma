

#include <stdio.h>

int Fact (int x)
{
	int i;
	for (i=x;i>0;i--)
	{
		Fact(x)= x * Fact(x-1);
	}
	return Fact;
}
int main()
{
	int i;
	printf ("enter number to cluc factorial \n");
//	fflush(stdin);
//	fflush(stdout);
	scanf ("%d",i);
	Fact(i);
	printf("%d",Fact(i));
}
