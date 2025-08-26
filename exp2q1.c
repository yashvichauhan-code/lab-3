//area and peri of rectangle based on length and breadth
#include <stdio.h>
int main()
{
    float length, breadth, area, perimeter;
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area: %f\n", area);
    printf("Perimeter: %f\n", perimeter);
    return 0;
}