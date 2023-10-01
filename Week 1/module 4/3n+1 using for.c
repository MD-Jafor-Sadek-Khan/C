#include "stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = n; i > 1;)
    {
        printf("%d\n",i);
        if (i%2==0)
        {
            i/=2;   
        }
        else
        {
            i=3*i+1;
        }
        
        n=i;
    }
    printf("%d",n);
    
    return 0;
}
