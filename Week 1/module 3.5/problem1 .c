#include "stdio.h"

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("a is bigger");
    }
    else if (b>a)   
    {
        printf("b is bigger");
    }
    else
    {
        printf("They are equal");
    }
    


    return 0;
}