#include <stdio.h>
int sumHundred(int x)
{
    if (x>=1)
    {
        return x+sumHundred(x-1);
    }
    else
    return 0;
}

int main()
{
    int x=100;
    printf ("%d",sumHundred(x));


    return 0;
}
