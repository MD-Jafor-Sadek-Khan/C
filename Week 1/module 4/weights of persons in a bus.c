#include "stdio.h"
int main()
{
    int n;
    int w;
    int sum=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&w);
        sum+=w;
    }
    printf("%d",sum);
    return 0;
}
