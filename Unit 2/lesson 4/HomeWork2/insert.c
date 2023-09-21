// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int i[100],pos,a,no,ins;
    printf("enter no.of elements: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&a);
    for(no=0;no<a;++no)
    {
        printf(" ");
        fflush (stdin);
        fflush(stdout);
        scanf("%d",&i[no]);
    }
    for(no=0;no<a;++no)
    {
        printf("%d\t",i[no]);
    }
    printf("\r\nenter the elemen to be insert : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&ins);
    printf("enter the location : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&pos);
    a=a+1;
    for(no=a-1;no>=pos;--no)
    i[no]=i[no-1];
    i[pos-1]=ins;
    for(no=0;no<a;no++)
    {
        printf("%d\t",i[no]);
    }





    return 0;
}
