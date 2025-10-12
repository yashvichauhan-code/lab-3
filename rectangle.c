//area and peri of rectangle based on length and breadth
#include <stdio.h>
int ar(int l, int b){
    int a = l*b;
    return a;
}
int pr(int l, int b){
    int p = 2 * (l+ b);
    return p;
}
int main(){
    int length, breadth, area, perimeter;
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);
    int result1= ar(length, breadth);
    int result2= pr(length, breadth);
    printf("Area: %d\n", result1);
    printf("Perimeter: %d\n", result2);
    return 0;
}