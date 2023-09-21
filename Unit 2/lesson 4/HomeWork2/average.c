#include <stdio.h>
int main() 
{
    float i[100] ,avg[100],sum[100];
    int a,b,c;
    printf("enter the number of data : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        printf("%d. enter number : ",b+1);
        fflush(stdin);
        fflush(stdout);
        scanf("%f",&i[a]);
        sum[a]+=i[a];
    }
    avg[a]=sum[a]/a;
    printf ("average = %f",avg[a]);
    
    return 0;
}