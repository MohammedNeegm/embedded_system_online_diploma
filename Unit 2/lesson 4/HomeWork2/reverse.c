#include <stdio.h>
int main()
{
    char str[100];
    int i;
    char j;
    printf("enter the string : ");
    fflush(stdout);
    gets(str);
    strlen(str);
    printf ("reverse the string is : ");
    for(i=strlen(str);i>=0;i--)
    {
        j=str[i];
        printf ("%c",j);
    }
    return 0;
}