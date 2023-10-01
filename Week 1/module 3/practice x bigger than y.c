#include "stdio.h"

int main()
{
    int x, y;

    printf("Enter 2 numbers x and y: ");

    scanf("%d%d", &x, &y);

    if (x > y)
    {
        printf("x = %d is greater.\n",x);
    }
    else
    {
        printf("y = %d is greater.\n",y);
    }

    return 0;
}