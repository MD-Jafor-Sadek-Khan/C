#include "stdio.h"

int main()
{
    int a,b,c;
    printf("Enter 3 numbers a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("a is the largest number");
    }
    else if(b>a && b>c)
    {
        printf("b is the largest numbe");
    }
    else
    {
        printf("c is the largest number");
    }



    return 0;
}