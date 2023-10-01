#include "stdio.h"

int main()
{

    printf("Enter Base: ");
    float b;
    scanf("%f",&b);

    printf("Enter Height: ");
    float h;
    scanf("%f",&h);

    float area = b*h*0.5;

    printf("\nThe Area of the Triangle is %f",area);





    return 0;
}