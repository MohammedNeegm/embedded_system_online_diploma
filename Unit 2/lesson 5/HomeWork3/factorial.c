

#include <stdio.h>

int Fact (int x)
{
	int i;
	if (n!=0)
		return x * Fact(x-1);
	else
	return 1;
}
int main()
{
	int i;
	printf ("enter number to cluc factorial \n");
	fflush(stdin);
	fflush(stdout);
	scanf ("%d",i);
	Fact(i);
	printf("%d",Fact(i));
}
