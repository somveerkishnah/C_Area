#include <stdio.h>
#include <math.h>



void main()
{
    float radius, area_Circle;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area_Circle = 3.142 * radius * radius;

    printf("Area of circle = %f", area_Circle);


}