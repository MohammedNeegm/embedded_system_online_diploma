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
    printf("\nlength of string = %d",strlen(str));
    
    return 0;
}