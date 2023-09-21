#include <stdio.h>
int main()
{
    float i[2][2],sum[2][2];
    int a,b;
    float j[2][2];
    printf ("enter the element of 1st matrix \r\n");
    for (a=0;a<2;a++)
    {
        for (b=0;b<2;b++)
        {
            printf ("enter a [%d][%d] = \r\n",a+1,b+1);
            fflush(stdin);
            fflush(stdout);
            scanf("%f",&i[a][b]);
        }
    }
    printf ("enter the element of 2nd matrix \r\n");
    for (a=0;a<2;a++)
    {
        for (b=0;b<2;b++)
        {
            printf("enter b [%d][%d] \r\n",a+1,b+1);
            fflush(stdin);
            fflush(stdout);
            scanf("%f",&j[a][b]);
        }
    }
    printf ("sum of matrix \r\n ");
    for (a=0;a<2;a++)
    {
        for (b=0;b<2;b++)
        {
            sum[a][b]=i[a][b]+j[a][b];
        }
    }
    for (a=0;a<2;a++)
    {
        for (b=0;b<2;b++)
        {
                printf ("%f   ",sum[a][b]);
                if(b==2-1)
                {
                    printf("\n\n");
                }
        }
    }
        
    
    
    
    
    
    
    
    
    
    
    return 0;
}