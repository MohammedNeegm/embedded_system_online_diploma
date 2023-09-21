#include <stdio.h>
#include<string.h>

int main() 
{
    char str[100];
    int i;
    printf("enter a string : ");
    fflush(stdin);
    fflush(stdout);
    gets(str);
    for(i=0;str[i]!='\0';++i);
    printf("\nlength of string = %d",i);
    
    return 0;
}