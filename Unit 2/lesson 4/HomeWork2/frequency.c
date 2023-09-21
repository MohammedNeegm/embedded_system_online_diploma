#include <stdio.h>
#include<string.h>

int main() 
{
    char str[100];
    int i,count=0;
    char j ;
    printf("enter a string : ");
    fflush(stdin);
    fflush(stdout);
    gets(str);
    
    printf("\nenter character to find frequency : ");
    fflush(stdin);
    fflush(stdout);
    scanf ("%c",&j);
    
    for (i=0;str[i]!='\0';i++)
    {
        if (j==str[i])
        ++count;
    }
    printf("\nfrequency of %c= %d ",j,count);

    return 0;
}