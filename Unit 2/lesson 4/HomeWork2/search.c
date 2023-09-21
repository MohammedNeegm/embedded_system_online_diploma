#include <stdio.h>
int main ()
{
    int arr[100],ele,n,i;
    printf ("enter no.of elements : ");
    fflush (stdin);
    fflush (stdout);
    scanf("%d",&n);
    printf("enter an elements\n");
    for (i=0;i<n;++i)
    {
        printf("");
        scanf ("%d",&arr[i]);
    }
    for (i=0;i<n;++i)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nenter the elements to be searched : ");
    fflush (stdin);
    fflush (stdout);
    scanf("%d",&ele);
    for (i=0;i<n;++i)
    {
        if(arr[i]==ele){
        
            printf("number found at the location = %d",i+1);
            break;
            }
    }
        
    
    
    
    
    
    return 0;
}