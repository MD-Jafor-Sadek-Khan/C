#include "stdio.h"
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a == 0 || b == 0 || c==0)
    {
        printf("No");
    }
    
    
    else if(a==b && b==c)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}
